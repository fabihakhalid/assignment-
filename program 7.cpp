#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Input the number of elements to be stored in the array: ";
    cin >> n;

    int arr1[n], arr2[n];

    cout << "Input " << n << " elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << " : ";
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    cout << "The elements stored in the first array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "The elements copied into the second array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (arr2[i] % 2 == 0) {
            sum += arr2[i];
        }
    }

    cout << "Sum = ";
    for (int i = 0; i < n; i++) {
        if (arr2[i] % 2 == 0) {
            if (i > 0 && arr2[i-1] % 2 == 0) {
                cout << "+";
            }
            cout << arr2[i];
        }
    }
    cout << " = " << sum << endl;

    return 0;
}
