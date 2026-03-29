#include <iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j){
        while (i <= high && arr[i] <= pivot){
            i++;
        }
        while (j >= low && arr[j] > pivot){
            j--;
        }
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);
    return j;
}

void quicksort(int arr[], int low, int high)
{

    if (low < high)
    {
        int partitionidx = partition(arr, low, high);

        quicksort(arr, low, partitionidx - 1);
        quicksort(arr, partitionidx + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}