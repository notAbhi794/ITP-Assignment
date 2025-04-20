#include <iostream>
using namespace std;

void moveNegatives(int arr[], int n) {
    int j = 0;  
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

int main() {
    int arr[] = {4, -3, 7, -1, 2, -9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    moveNegatives(arr, n);

    cout << "\n\nArray after moving negative elements to one side:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
