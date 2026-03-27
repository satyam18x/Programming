#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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

    selectionSort(arr, n);


    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// class Solution {
// public:
//     vector<int> selectionSort(vector<int>& nums) {
       
//        int n = nums.size();

//        for(int i=0;i<=n-2;i++){
//         int minidx=i;
         
//           for(int j=i;j<=n-1;j++){
//             if(nums[j]<nums[minidx])
//               minidx=j;
//           }
//           swap(nums[i],nums[minidx]);
//        }
        
//        return nums;
//     }
// };
