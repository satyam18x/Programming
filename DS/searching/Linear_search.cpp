
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  int linearSearch(vector<int>& nums, int target) {
        
        int n=nums.size();
        for(int i=0;i<target;i++){
            if(nums[i]==target)
            return i ;  
        }
        return -1;
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
    int target;
    cout << "Enter the value you want to find : ";
    cin >> target;
   int result= linearSearch(arr, target);

   if (result==-1)
    cout << " Element not found "  ;
   else cout << "Element found at index : " << result; 
    
}
// class Solution {
// public:
//     int linearSearch(vector<int>& nums, int target) {
        
//         int n=nums.size();
//         for(int i=0;i<target;i++){
//             if(nums[i]==target)
//             return i ;  
//         }
//         return -1;
//     }
// };