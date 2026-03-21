#include <iostream>
using namespace std;

void reverse(int i, int arr[], int n)
{

    if (i>= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n);
}

int main()
{
    int n;
    cout <<"size of array :";
    cin >> n;

    int arr[n];
    cout << "write an array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverse(0, arr, n);

    //printing the array
      for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        return 0;
}

// class Solution {
// public:
//     void reverse(int arr[], int n) {
//         static int i = 0;

//         if (i >= n / 2) {
//             i = 0; // reset for next test case
//             return;
//         }

//         swap(arr[i], arr[n - i - 1]);
//         i++;

//         reverse(arr, n);
//     }
// };