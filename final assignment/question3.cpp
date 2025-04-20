#include <iostream>
using namespace std;

int main() {
    string str, res = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            res = res+str[i];
            
        }
    }

    cout << "\nOnly alphabets: " << res;
    return 0;
}
