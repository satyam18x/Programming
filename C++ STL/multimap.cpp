#include <iostream>
using namespace std;
#include <map>

int main(){
    multimap<int,int> mpp;
    
    mpp.insert ({1,10});
    mpp.emplace (2,20);
    mpp.insert ({1,15});  // duplicate key allowed

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }
}