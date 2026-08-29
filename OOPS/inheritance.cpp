// C++ program to demonstrate inheritance and polymorphism 
//badically it is code for Method Overriding
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {

    // Creating a Dog object
    Dog d;

    // Calling Dog's overridden method
    d.sound();

    // Base class pointer pointing to Dog object
    Animal* a = &d;

    // Calls Dog's sound() because it is virtual
    a->sound();

    return 0;
}