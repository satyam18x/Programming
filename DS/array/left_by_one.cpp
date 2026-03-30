//left rotate an array by one place

#include <iostream>
using namespace std;


int* leftrotate(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
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

    leftrotate(arr, n);

    cout << "Updated array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
