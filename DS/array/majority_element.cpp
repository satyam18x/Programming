//Brute force

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n=nums.size();

        
//         for(int i=0;i<n;i++){

//              int count=0;
//              for(int j=0;j<n;j++){
//                 if(nums[i]==nums[j]){
//                     count++;
//                 }

//                 if(count>n/2)
//                 return nums[i];
//              }

            
//         }
//         return -1;
//     }
// };

//Better approach
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n=nums.size();

//         map <int,int> mpp;
        
//         for(int i=0;i<n;i++){
//             mpp[nums[i]]++;

//         }

//         for(auto it : mpp){
//             if(it.second>n/2){
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };

//optimal 
#include <iostream>
#include <vector>
using namespace std;

    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        int count=0;
        int el;
        
        for(int i=0;i<n;i++){
         if(count==0){
            count++;
            el=nums[i];
         }
         else if(el==nums[i]){
            count++;
         }
         else{count--;
         }
        }

        int count1=0;
        for(int i=0;i<n;i++){
          if(nums[i]==el){
            count1++;
          }
        if(count1>n/2)
        return el;
        }       
         return -1;
    }

