#include "Animal.h"
#include <string>

class Dog : public Animal {
    int num_spots;

    public:
    Dog(int _age, int _num_spots) : Animal(_age), num_spots(_num_spots) {

    }

    std::string GetType() {
        return "Dog";
    }

    int GetAge() {
        return Animal::GetAge() * 7;
    }

    int GetSpots() {
        return num_spots;
    }

    emp::Ptr<Animal> Reproduce() {
        return new Dog(0, GetSpots());
    }

};