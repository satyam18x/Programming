#include <iostream>
using namespace std;
#include <set>


int main(){

    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    
    cout << s.count(3) << endl; // 1 because 3 is present in the set
    cout << s.count(6) << endl; // 0 because 6 is not present in the set

    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;

    auto it = s.find(3);
    if(it != s.end()){
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }

    s.erase(3);

    it = s.find(3);
    if(it != s.end()){
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }

}