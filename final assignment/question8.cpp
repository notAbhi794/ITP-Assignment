#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int i = 0, j = str.length() - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            cout << "Not a palindrome";
            return 0;
        }
        i++;
        j--;
    }

    cout << "Palindrome";
    return 0;
}
