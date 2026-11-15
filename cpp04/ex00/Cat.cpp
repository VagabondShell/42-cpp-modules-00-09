#include "Cat.hpp"

Cat::~Cat()
{
  std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat()  
{
    this->type = "Cat";
    std::cout << "Cat Default Constructor called." << std::endl;
}


Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat Copy Constructor called." <<  std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        this->type = other.type;
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meaow!" << std::endl;
}
