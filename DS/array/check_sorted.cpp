//fin the array is sorted or not
#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            return false; // not sorted
        }
    }
    return true; // sorted
}

int main()
{
    int n;
    cout << "Write size of array : ";
    cin >> n;

    int arr[n];
    cout << "Write an array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(sorted(arr, n))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";
}

// class Solution{	
// 	public:
// 		bool isSorted(vector<int>& nums){
// 			int n=nums.size();

//             for (int i=0;i<n-1;i++){
//                 if(nums[i]>nums[i+1])
//                 return false;
//             }
//             return true;
// 		}
// };