#include "Animal.h"
#include <string>
#include "emp/base/Ptr.hpp"

class Squid : public Animal {
    int num_legs;

    public:
    Squid(int _age, int _num_legs) : Animal(_age), num_legs(_num_legs) {

    }

    std::string GetType() {
        return "Squid";
    }

    int GetLegs() {
        return num_legs;
    }

    emp::Ptr<Animal> Reproduce() {
        return new Squid(0, GetLegs());
    }

};