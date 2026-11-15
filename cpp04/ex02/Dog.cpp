
#include "Dog.hpp"

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain(); 
    std::cout << "Dog Default Constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->brain = new Brain(*(other.brain));
    std::cout << "Dog Copy Constructor called." <<  std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*(other.brain)); 
        this->type = other.type;
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Woof!" << std::endl;
}
