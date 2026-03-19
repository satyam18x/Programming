#include <iostream>
using namespace std;

void func(int i, int n)
{

    if (i > n)
    {
        return;
    }
    else
    {
        cout << "satyam" << endl;

        func(i + 1, n);
    }
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    func(1, n);
}