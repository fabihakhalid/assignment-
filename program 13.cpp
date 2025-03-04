#include <iostream>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0, upperCase = 0, lowerCase = 0, specialChars = 0, digits = 0, words = 1;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
            if (ch >= 'A' && ch <= 'Z') {
                upperCase++;
            }
            if (ch >= 'a' && ch <= 'z') {
                lowerCase++;
            }
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            words++;
        } else {
            specialChars++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Upper case letters: " << upperCase << endl;
    cout << "Lower case letters: " << lowerCase << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << specialChars << endl;
    cout << "Words: " << words << endl;

    return 0;
}
