// find the second largest element in an array

#include <iostream>
using namespace std;

int secondlargestelement(int arr[], int n)
{

    int largest = arr[0];
    int slargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest){
            slargest = largest;
        largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }

    return slargest;
}

int main()
{
    int n;
    cout << "Write size of array : ";
    cin >> n;

    cout << "Write an array : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = secondlargestelement(arr, n);

    cout << "second largest elemnent is " << result;
}

// class Solution {
// public:
//     int secondLargestElement(vector<int>& nums) {
//         int n=nums.size();
//         int largest = nums[0];
//         int slargest= -1;

//         for(int i=0;i<n;i++){
//             if(nums[i]>largest){
//                 slargest=largest;
//                 largest = nums[i];
//             }
//             else if(nums[i]<largest && nums[i]>slargest){
//                 slargest=nums[i];
//             }
            
//         }
//         return slargest;
//     }
// };