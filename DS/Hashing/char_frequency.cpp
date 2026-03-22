#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;

    // precompute
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
        hash[s[i]] += 1;                     

    // query
    int q;
    cout << "Enter how many characters you want frequency of : ";
    cin >> q;

    cout << "Enter the characters you want frequency of : ";
    while (q--)
    {

        char c;
        cin >> c;

        // fetch
        cout << hash[c] << endl;
    }
}