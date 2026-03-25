#include <iostream>
using namespace std;

// Bubble Sort Function
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
   int n;
    cout << "Write size of array : ";
    cin >>n;

    cout << "Write an array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    // Printing inside main
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}