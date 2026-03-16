#include <iostream>
#include <set>

using namespace std;

int main() {

    multiset<int> ms;

    ms.insert(1);   // {1}
    ms.insert(1);   // {1,1}
    ms.insert(1);   // {1,1,1}

    // erase all 1's
    ms.erase(1);

    // insert again for demonstration
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    int cnt = ms.count(1);
    cout << "Count of 1: " << cnt << endl;

    // erase only one occurrence
    ms.erase(ms.find(1));

    cout << "After erasing one element: ";
    for(int x : ms){
        cout << x << " ";
    }
    cout << endl;

    // erase a range
    auto it1 = ms.find(1);
    auto it2 = ms.find(1);
    advance(it2, 2);

    ms.erase(it1, it2);

    cout << "After range erase: ";
    for(int x : ms){
        cout << x << " ";
    }
    cout << endl;

}