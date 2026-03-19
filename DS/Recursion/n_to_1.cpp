#include <iostream>
using namespace std;

void func(int i, int n)
{
  
    if (i < 1)
    {
        return;
    }
    else
    {
       cout <<i <<" ";

        func(i - 1, n);
    }
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    func(n, n);
}