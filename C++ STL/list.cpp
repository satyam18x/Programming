#include <iostream>
#include <list>

using namespace std;

int main(){

    list <int> l;
    l.push_back(1);
    l.emplace_back(2);
    l.push_front(3);
    l.emplace_front(4);

     for (int i:l){
        cout << i << " ";
    }
    cout << endl;

    /*rest all operations are same as vector but the only difference is that in list we have to use iterator
    to access the element because list is not stored in contiguous memory location*/

}