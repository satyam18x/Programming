#include <iostream>
using namespace std;

int main(){

    int n=7789;
     
    while (n>0){
       int  lastdigit = n%10;
        cout << lastdigit << endl;
        n=n/10;
        cout << n << endl;
    }
}