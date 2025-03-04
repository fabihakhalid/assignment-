#include <iostream>
using namespace std;

int main() {
    int rows = 2, cols = 2;

    int matrix1[rows][cols], matrix2[rows][cols], sumMatrix[rows][cols];

    cout << "Enter elements for the first matrix (2x2):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "element - [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements for the second matrix (2x2):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "element - [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    bool areEqual = true;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                areEqual = false;
                break;
            }
        }
    }

    if (areEqual) {
        cout << "The matrices are equal.\n";
    } else {
        cout << "The matrices are not equal.\n";
    }

    cout << "The sum of the two matrices is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
