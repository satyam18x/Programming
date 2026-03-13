#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cout << "write 5 numbers: ";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    cout << "the numbers you entered are: ";
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}