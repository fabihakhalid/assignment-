#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Input the number of elements in the first array: ";
    cin >> n;

    int arr1[n], arr2[n], merged[2 * n];

    cout << "Input " << n << " elements in the first array:\n";
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << ": ";
        cin >> arr1[i];
    }

    cout << "Input " << n << " elements in the second array:\n";
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << ": ";
        cin >> arr2[i];
    }

    // Merge the two arrays into a merged array
    for (int i = 0; i < n; i++) {
        merged[i] = arr1[i];
        merged[i + n] = arr2[i];
    }

    // Sort the merged array in descending order using a simple bubble sort
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1 - i; j++) {
            if (merged[j] < merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    cout << "The merged array in descending order is:\n";
    for (int i = 0; i < 2 * n; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    // Count duplicates
    for (int i = 0; i < 2 * n; i++) {
        for (int j = i + 1; j < 2 * n; j++) {
            if (merged[i] == merged[j]) {
                count++;
                break;
            }
        }
    }

    cout << "Total number of duplicate elements found in the array is: " << count << endl;

    return 0;
}
