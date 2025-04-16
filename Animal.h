#include <string>
#ifndef ANIMAL
#define ANIMAL

class Animal {
    int age;

    public:
    Animal(int _age) : age(_age) {}

    virtual std::string GetType() {
        return "Animal";
    }

    virtual int GetAge() {return age;}

    virtual emp::Ptr<Animal> Reproduce() {
        return new Animal(0);
    }

};

#endif