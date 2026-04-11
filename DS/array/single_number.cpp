// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include <iostream>
#include <vector>
using namespace std;

int singlenumber(vector<int> &arr)
{
    int n = arr.size();

    int xorr = 0;
    for (int i = 0; i < n; i++)
    {

        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main()
{
    int n;
    cout << "Write size of array : ";
    cin >> n;

    cout << "Write an array : ";

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = singlenumber(arr);

    cout << "single number is  : " << result;
}

// optimal solution
//  class Solution {
//  public:
//      int singleNumber(vector<int>& nums) {

//          int n=nums.size();

//          int xorr = 0;
//          for(int i=0;i<n;i++){

//             xorr = xorr ^ nums[i];
//          }
//          return xorr;

//     }

// };

// Brute force approach
//  class Solution {
//  public:
//      int singleNumber(vector<int>& nums) {

//          int n=nums.size();

//          int num=0;

//          for(int i=0;i<n;i++){
//             num = nums[i];

//             int count=0;
//            for(int j=0;j<n;j++){
//             if(nums[j]==num)
//               count++;
//            }
//             if(count==1)
//            return num;
//          }
//         return -1;
//     }

// };