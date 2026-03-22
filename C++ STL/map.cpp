#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, int> mpp;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    mpp[{2}] = 10;   // overwrites value for key 2

    // printing map
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[5] << endl;   // creates key 5 with value 0

    // // find
    // auto it = mpp.find(3);
    // if(it != mpp.end())
    //     cout << it->second << endl;

    // // find (not found case)
    // auto it2 = mpp.find(5);
    // if(it2 == mpp.end())
    //     cout << "Not found" << endl;

    // // lower_bound
    // auto lb = mpp.lower_bound(2);
    // if(lb != mpp.end())
    //     cout << "Lower bound: " << lb->first << endl;

    // // upper_bound
    // auto ub = mpp.upper_bound(3);
    // if(ub != mpp.end())
    //     cout << "Upper bound: " << ub->first << endl;

    // // erase, size, empty, swap same as set

}