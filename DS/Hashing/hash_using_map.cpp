#include <iostream>
#include <map>
using namespace std;


int main()
{

    int n;
    cout << "enter size of array : ";
    cin >> n;

    cout << "enter the array of size " << n << " : ";

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    map<int, int> mpp;                    //we can  also use unordered map
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    
    //iterate using map
    // for(auto it : mpp){
    //     cout << it.first << " --> " << it.second << endl;
    // }

    // query
    int q;
    cout << "Enter how many numbers you want to check frequncy of : ";
    cin >> q;
    cout << "Enter numbers you want to check frequncy of : ";
    while (q--)
    {
        int number;
        cin >> number;

        cout << mpp[number] << endl;
    }
}