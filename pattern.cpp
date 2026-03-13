#include <iostream>
using namespace std;

void print_pattern1( int n){

    for (int i=0;i<n;i++){
        for (int j=0; j<n;j++){
            cout << " * ";
        }
        cout << endl;
    }
}

void print_pattern2( int n){

    for (int i=0;i<n;i++){
        for (int j=0; j<=i;j++){
            cout << " * ";
        }
        cout << endl;
    }
}

void print_pattern3( int n){

    for (int i=1;i<=n;i++){
        for (int j=1; j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
}
void print_pattern4( int n){

    for (int i=1;i<=n;i++){
        for (int j=1; j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
}


int main(){
           int n;
           cout << "Enter the number of rows and columns: ";
          cin >> n;
          print_pattern1(n);
          print_pattern2(n);
          print_pattern3(n);
          print_pattern4(n);
    return 0;
}