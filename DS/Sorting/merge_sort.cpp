#include <iostream>
#include <vector>
using namespace std;

// Merge function
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;

    int i = left;
    int j = mid + 1;

    // Merge two sorted halves
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Remaining elements
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= right) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy back to original array
    for (int k = 0; k < temp.size(); k++) {
        arr[left + k] = temp[k];
    }
}

// Recursive merge sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {
    vector<int> arr = {5, 3, 2, 4, 1};

    cout << "Before sorting:\n";
    for (int x : arr) cout << x << " ";

    mergeSort(arr, 0, arr.size() - 1);

    cout << "\nAfter sorting:\n";
    for (int x : arr) cout << x << " ";

    return 0;
}