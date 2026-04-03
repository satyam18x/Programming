#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rightRotate(vector<int>& nums, int k){
    int n = nums.size();
    k = k % n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    rightRotate(nums, k);

    cout << "Rotated array: ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
}

//when using withou vector and also not using inbuilt reverse STL , writin a reverse function
// #include <iostream>
// using namespace std;

// void reverse(int arr[], int start, int end){
//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void rightRotate(int arr[], int n, int k){
//     k = k % n;

//     reverse(arr, 0, n - 1);
//     reverse(arr, 0, k - 1);
//     reverse(arr, k, n - 1);
// }

// int main(){
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int k;
//     cout << "Enter k: ";
//     cin >> k;

//     rightRotate(arr, n, k);

//     cout << "Rotated array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
// }