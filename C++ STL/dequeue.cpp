#include <iostream>
#include <deque>

using namespace std;

int main(){

    deque<int> d;

    d.push_back(8);
    d.emplace_back(20);
    d.push_front(6);
    d.emplace_front(4);

    for(int i : d){
        cout << i << " ";
    }
    cout << endl;

    /* Most operations are similar to vector.
       But unlike vector, deque allows insertion
       and deletion from both front and back efficiently. */

}