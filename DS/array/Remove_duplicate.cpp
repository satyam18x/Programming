//Remove duplicates from a sorted array
#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{

    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
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

    int result = removeDuplicates(arr, n);

    cout << "new length of array is : " << result;

    cout << "Updated array : ";
    for(int i = 0; i < result; i++){
        cout << arr[i] << " ";
    }
}
