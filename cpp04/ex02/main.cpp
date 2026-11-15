#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{

  const Animal* zoo[4];
  std::cout << "--- Creating the Zoo ---" << std::endl;
  for (int i = 0; i < 4; ++i) {
    if (i % 2 == 0) {
      zoo[i] = new Dog();
    } else {
      zoo[i] = new Cat();
    }
  }

  for (int i = 0; i < 4; ++i) {
    delete zoo[i];
  }

  Dog dog1; 
  Dog dog2;

  // Animal abstract;
  // dog2 = dog1;
  //
  // std::cout << "\n--- virtual des ---" << std::endl;
  // Animal *animal = new Dog;
  // delete animal;
}
