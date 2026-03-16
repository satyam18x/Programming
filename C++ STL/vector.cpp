#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(5);
    v.emplace_back(6);
       
    cout << v[0] << endl;
    cout << v[1] << endl;
////////////////////////////////////////////////

    vector<int> a(5, 100);
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;

////////////////////////////////////////////////

    vector<int> u={1,2,5,4,3};
     int i;
    for (i=0; i<u.size(); i++){
        cout << u[i] << " ";
    }
    cout << endl;

////////////////////////////////////////////////

   u.pop_back();
   cout << u.size()<< endl;
    for (i=0; i<u.size(); i++){
        cout << u[i] << " ";
    }
    cout << endl;

////////////////////////////////////////////////

    u.erase(u.begin() + 2);
     for (i=0; i<u.size(); i++){
        cout << u[i] << " ";
    }
    cout << endl;

////////////////////////////////////////////////

    u.insert(u.begin()+1, 50);  
     for (i=0; i<u.size(); i++){
        cout << u[i] << " ";
    }

    cout << endl;


 u.clear();   //clear vector

 v.swap(u); // swap vector

 cout << v.size() << " " << u.size() << endl;

 //iterator =  it points to the address of any element , it does'nt point to the element

 vector<int> s = {10, 20, 30, 40};

    vector<int>::iterator it;

    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";                       // * is used to get the value of the element at the address pointed by the iterator
    }



}