#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    string s2;

    cout << "write a string: ";
    cin >> s1;
    cout << "write another string: ";
    cin >> s2;

    cout<<s1 <<" "<<s2<<endl;

    string s ="satyam";
    int len = s.length();
    cout << s[0] << endl;
    cout << s[len-1] << endl;
}