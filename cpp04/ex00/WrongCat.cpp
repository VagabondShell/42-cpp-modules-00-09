#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "WrongCat Default Constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "WrongCat Copy Constructor called." << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        WrongAnimal::operator=(other);
        this->type = other.type;
    }
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Meaow!" << std::endl;
}
