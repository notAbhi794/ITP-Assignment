#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], merged[200];
    int n1, n2, i, j;

    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter elements of first array: ";
    for(i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter elements of second array: ";
    for(i = 0; i < n2; i++) {
        cin >> b[i];
    }

    for(i = 0; i < n1; i++) {
        merged[i] = a[i];
    }
    for(j = 0; j < n2; j++) {
        merged[i] = b[j];
        i++;
    }

    cout << "Merged array in reverse order:\n";
    for(int k = i - 1; k >= 0; k--) {
        cout << merged[k] << " ";
    }

    return 0;
}
