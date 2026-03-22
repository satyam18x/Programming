#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    // =========================
    // 🔹 ARRAY PART
    // =========================

    int arr[] = {5, 2, 8, 1, 3, 7};
    int n = 6;

    // 🔸 Sort full array (ascending)
    sort(arr, arr + n);

    cout << "Full array sorted: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // 🔸 Sort only a specific range (index 1 to 4)
    // Note: end index + 1 is used
    sort(arr + 1, arr + 5);

    cout << "Array after sorting index 1 to 4: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    // =========================
    // 🔹 VECTOR PART
    // =========================

    vector<int> v = {9, 4, 6, 2, 8, 1};

    // 🔸 Sort full vector (ascending)
    sort(v.begin(), v.end());

    cout << "Full vector sorted: ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    // 🔸 Sort specific range (index 1 to 4)
    sort(v.begin() + 1, v.begin() + 5);

    cout << "Vector after sorting index 1 to 4: ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;


    // =========================
    // 🔹 DESCENDING EXAMPLES
    // =========================

    // 🔸 Array descending
    sort(arr, arr + n, greater<int>());

    cout << "Array descending: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // 🔸 Vector descending
    sort(v.begin(), v.end(), greater<int>());

    cout << "Vector descending: ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

}