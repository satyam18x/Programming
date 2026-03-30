//find the largest element in an array

#include <iostream>
using namespace std;

int largestelement(int arr[],int n){

     int largest=arr[0];
     for(int i=0;i<n;i++){
        if(arr[i]>largest)
        largest=arr[i];
     }
     return largest;
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

    largestelement(arr,n);                                    // int result =     largestelement(arr,n); 
    
    cout <<"largest elemnent is " << largestelement(arr,n);   // cout <<"largest elemnent is " << result;
}

// class Solution {
// public:
//     int largestElement(vector<int>& nums) {

//         int n =nums.size();
//         int largest = nums[0];
//         for(int i=0;i<n;i++){
//             if(nums[i]>largest)
//              largest=nums[i];
//         }
//          return largest;

//     }
// };