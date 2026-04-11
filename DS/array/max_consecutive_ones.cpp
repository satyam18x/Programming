// find the maximum number of consecutive ones in an binary array.
#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> & arr)
{

    int n = arr.size();

    int maxi = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
            count = 0;
    }
    return maxi;
}

int main()
{
    int n;
    cout << "Write size of array : ";
    cin >> n;

    cout << "Write an binary array : ";

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = findMaxConsecutiveOnes(arr);

    cout << "max ones are : " << result;
}

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {

//         int n=nums.size();

//         int maxi = 0;
//         int count = 0;
//         for(int i=0;i<n;i++){
//             if (nums[i]==1)
//             {
//             count++;
//             maxi = max(maxi , count);
//             }
//             else
//              count = 0;
//         }
//         return maxi;
//     }
// };