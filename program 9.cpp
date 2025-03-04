#include <iostream>
using namespace std;

void sortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, newValue;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n + 1];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Enter the new value to insert: ";
    cin >> newValue;

    arr[n] = newValue;

    sortDescending(arr, n + 1);

    cout << "The array after inserting the new value and sorting in descending order is:" << endl;
    for (int i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
