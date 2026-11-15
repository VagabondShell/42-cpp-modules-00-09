#include "Cat.hpp"

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain(); 
    std::cout << "Cat Default Constructor called." << std::endl;
}


Cat::Cat(const Cat& other) : Animal(other)
{
    this->brain = new Brain(*(other.brain));
    std::cout << "Cat Copy Constructor called." <<  std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*(other.brain)); 
        this->type = other.type;
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Meaow!" << std::endl;
}
