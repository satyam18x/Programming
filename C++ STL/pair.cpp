#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p;
     p= {1, "Hello"};
  
    cout << p.first << " " << p.second << endl;

    pair<int,int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << arr[1].first << " " << arr[1].second << endl;

    pair <int ,pair<int,string>> p1 = {1, {2, "Hello"}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
}