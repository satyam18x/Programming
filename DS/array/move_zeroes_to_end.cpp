//optimal approach 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void movezeroes(vector<int> & arr ){
   int n=arr.size();

   //step1 , iterating i
   int j=-1;
   for(int i=0;i<n;i++){
      if(arr[i]==0){
        j=i;
        break;
      }
   }
   for (int i=j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
   }
}
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    movezeroes(arr);

    cout << "updated array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
//Brute force approach
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {

//         int n=nums.size();

//         //step1   -- store non zeroes in temp
//         vector<int> temp;
//         for (int i=0;i<n;i++){
//             if(nums[i]!=0)
//             temp.push_back(nums[i]);
//         }

//         //step2   -- adding all non zero to front
//         int nz = temp.size();
//         for(int i=0;i<nz;i++){
//             nums[i]=temp[i];
//         }
          
//         //step3  -- adding zeroes to end
//         for(int i=nz;i<n;i++){
//             nums[i]=0;
//         }
//     }
// };