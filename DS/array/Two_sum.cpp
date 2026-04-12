//brute force

#include <iostream>
#include <vector>
using namespace std;

vector <int> twosum(vector<int> &arr , int target)
{
    int n = arr.size();
     
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]+arr[j]==target)
            return {i,j};
        }
    }
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

    int target;
    cout << "Enter the sum target : ";
    cin >> target;

 vector <int> result = twosum(arr , target);

    cout << "Two indices are  : " <<  result[0] << " "  << result[1];
}


//optimal solution
// vector<int> twosum(vector<int> &arr, int target)
// {
//     map<int, int> mp; // value -> index

//     for(int i = 0; i < arr.size(); i++)
//     {
//         int complement = target - arr[i];

//         // check if complement exists
//         if(mp.find(complement) != mp.end())
//         {
//             return {mp[complement], i};
//         }

//         // store current element
//         mp[arr[i]] = i;
//     }

//     return {-1, -1}; // if no pair found
// }