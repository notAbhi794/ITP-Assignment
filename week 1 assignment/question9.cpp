#include <iostream>
using namespace std;
void printArray(int arr[], int size, int index = 0) {
    if (index == size) {
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    printArray(arr, n);

    return 0;
}
