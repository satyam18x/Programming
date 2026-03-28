#include <iostream>
using namespace std;

// Bubble Sort Function
void insertionsort(int arr[], int n) {
     for(int i=0;i<=n-1;i++){
            int j=i;
            while (j>0 && arr[j-1]<arr[j]){
                swap(arr[j-1],arr[j]);
                j--;
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

    insertionsort(arr, n);

    // Printing inside main
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



// class Solution {
// public:
//     vector<int> insertionSort(vector<int>& nums) {

//         int n=nums.size();

//         for(int i=0;i<=n-1;i++){
//             int j=i;
//             while (j>0 && nums[j-1]>nums[j]){
//                 swap(nums[j-1],nums[j]);
//                 j--;
//             }
//         }
//         return nums;

//     }
// };
