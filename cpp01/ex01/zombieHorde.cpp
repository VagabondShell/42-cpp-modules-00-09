#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) 
{
  if (N <= 0) {
    std::cout << "enter a positive number starting from 1" << std::endl;
    return NULL;
  }
  Zombie *horde = new Zombie[N];
  for (int i = 0; i < N; i++) {
    horde[i].setName(name);
  }
  return horde;
}
