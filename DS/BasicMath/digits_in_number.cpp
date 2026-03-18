#include <iostream>
using namespace std;

int main(){

    int n=7789;
    int count=0;
    
    while (n>0){

        count=count+1;
        n=n/10;
        
    }
    cout << count << endl;
}