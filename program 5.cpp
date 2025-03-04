#include<iostream>
using namespace std;

int main() {
    int rows, i, j;

    cout << "Enter number of rows: ";
    cin >> rows;

    i = rows;

    do {
        j = i;
        do {
            cout << j << " ";
            j--;
        } while (j > 0);
        
        cout << endl;
        i--;
    } while (i > 0);

    return 0;
}
