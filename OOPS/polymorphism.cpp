//run time polymorphism
//using virtual function and method overriding
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