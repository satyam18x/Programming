#include <iostream>
using namespace std;

int add( int num1 , int num2){
    int sum = num1 + num2;
    return sum ;
}

int main(){
    cout<<"add two numbers : " << endl;
    int num1, num2;
    cin >> num1 >> num2;
    int sum = add(num1, num2);
    cout << "the sum of the two numbers is: " << sum << endl;
    return 0;
}