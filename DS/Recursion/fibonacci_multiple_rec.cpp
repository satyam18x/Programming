#include <iostream>
using namespace std;

int fib(int n){
   int last;
   int sec_last;

    if(n<=1)
      return n;
    
    else
     last     = fib(n-1);  //multiple recursion = multiple function calls
     sec_last = fib(n-2);   
                              //simple recursion = return fib(n-1)+fib(n-2);
   return last+sec_last;  
      

}

int main(){

    int n;
    cout << "enter n : ";
    cin >> n;

    fib(n);

    cout << fib(n);



}