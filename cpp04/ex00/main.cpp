#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();

    delete j;
    delete i;
    
    std::cout << "----------------------" << std::endl;
    
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    wrongCat->makeSound();
    wrongAnimal->makeSound();

    delete wrongAnimal;
    delete wrongCat;
    
    return 0;
}
