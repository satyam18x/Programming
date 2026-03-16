#include <iostream>
#include <unordered_set>

using namespace std;

int main(){

    unordered_set<int> us;

    us.insert(5);
    us.insert(1);
    us.insert(3);
    us.insert(2);
    us.insert(4);
    us.insert(3);   // duplicate, will not be added

    cout << "Elements in unordered_set: ";

    for(auto i : us){
        cout << i << " ";
    }

    cout << endl;

    // find element
    auto it = us.find(3);

    if(it != us.end()){
        cout << "Element found: " << *it << endl;
    } 
    else{
        cout << "Element not found" << endl;
    }

    // count
    cout << "Count of 3: " << us.count(3) << endl;

    // erase
    us.erase(3);

    cout << "After erase: ";

    for(auto i : us){
        cout << i << " ";
    }

}