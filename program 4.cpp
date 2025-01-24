#include<iostream>
using namespace std;

int main() {
    int rows, i = 1, j;

    cout << "Input number of rows: ";
    cin >> rows;

    while (i <= rows) {
        j = 1;
        while (j <= i) {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
