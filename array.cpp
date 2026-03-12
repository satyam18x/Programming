#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cout << "write 5 numbers: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << "the numbers you entered are: ";
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;

    arr[3]+=10;
    cout << "after adding 10 to the 4th number: ";
    cout << arr[3] << endl;

    return 0;
}