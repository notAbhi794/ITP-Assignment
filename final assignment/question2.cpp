#include <iostream>
using namespace std;

int main() {
    string str;
    int a = 0, d = 0, s = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            a++;
        else if (ch >= '0' && ch <= '9')
            d++;
        else if (ch != ' ')
            s++;
    }

    cout << "\nAlphabets: " << a;
    cout << "\nDigits: " << d;
    cout << "\nSpecial characters: " << s;

    return 0;
}
