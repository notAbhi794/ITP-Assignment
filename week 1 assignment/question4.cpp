#include <iostream>
using namespace std;

int main() {
    int arr[100], freq[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[i] = 1; 
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq[i]++;
                freq[j] = 0;
            }
        }
    }

    int maxFreq = freq[0], maxElement = arr[0];
    for(int i = 1; i < n; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxElement = arr[i];
        }
    }

    cout << "Maximum occurring element is: " << maxElement << " (occurred " << maxFreq << " times)" << endl;

    return 0;
}
