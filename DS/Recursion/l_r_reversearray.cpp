#include <iostream>
using namespace std;

void reverse(int arr[], int l, int r)
{
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    reverse(arr,l + 1, r - 1);
}

int main()
{
    int n;
    cout << "size of array :";
    cin >> n;

    int arr[n];
    cout << "write an array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int l = 0;
    int r = n - 1;

    reverse(arr, l, r);

    // printing the array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}