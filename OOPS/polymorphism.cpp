//run time polymorphism
//using virtual function and method overriding
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks";
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows";
    }
};

int main(){

    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->sound(); // Output: Animal makes sound
    a2->sound(); // Output: Animal makes sound

    return 0;
}