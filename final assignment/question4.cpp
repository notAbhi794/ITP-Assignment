#include <iostream>
using namespace std;

int main() {
    int arr[100], n, k;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter value of k: ";
    cin >> k;

    for (int r = 0; r < k; r++) {
        int last = arr[n - 1];  
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1]; 
        }
        arr[0] = last;
    }

    cout << "\nArray after rotation:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
