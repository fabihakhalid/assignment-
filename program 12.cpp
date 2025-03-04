#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int n = 10; // The size of the array
    int minSum = 1000000; // A large number to start with
    int num1, num2;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    cout << "The Pair of elements whose sum is closest to zero are: ";
    cout << "[" << num1 << ", " << num2 << "]" << endl;

    return 0;
}
