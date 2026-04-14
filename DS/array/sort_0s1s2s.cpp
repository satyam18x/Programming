//brute force approach - use any sorting technique

//better solution  - TC - O(2n)
#include <iostream>
#include <vector>
using namespace std;

    void sortColors(vector<int>& nums) {

        int n = nums.size();
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

       
        for(int i = 0; i < n; i++){                   // count occurrences
            if(nums[i] == 0) count0++;
            else if(nums[i] == 1) count1++;
            else count2++;
        }

        // fill 0s
        for(int i = 0; i < count0; i++)
            nums[i] = 0;

        // fill 1s
        for(int i = count0; i < count0 + count1; i++)
            nums[i] = 1;

        // fill 2s
        for(int i = count0 + count1; i < n; i++)
            nums[i] = 2;
    }


//Better approach - Dutch National Flag Algorithm. solves in O(n)
void sortColors(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

