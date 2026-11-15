#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal Default Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "WrongAnimal Copy Constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "* Undefined Wrong Animal Sound *" << std::endl;
}

const std::string& WrongAnimal::getType() const {
    return this->type;
}
