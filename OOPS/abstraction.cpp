// C++ program to demonstrate the use of virtual function
#include <iostream>
using namespace std;

class vehicle{

    public :
     virtual void start(){
         cout << "Vehicle started" << endl;
     }
};
class
    car : public vehicle{
    
        public :
        void start(){
            cout << "Car started" << endl;
        }
    };

int main(){
    car c;
    c.start();
    return 0;
} 

// C++ program to demonstrate the use of abstraction and pure virtual function
#include <iostream>
using namespace std;

class vehicle{

    public :
     virtual void start() = 0;
};

class car : public vehicle{

    public :
    void start(){
        cout << "Car started" << endl;
    }
};

int main(){

    car c;
    c.start();

    return 0;
}
