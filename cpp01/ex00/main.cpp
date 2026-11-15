#include "Zombie.hpp"
#include <iostream>

int main() 
{
  std::cout << "--- Testing newZombie (Heap Allocation) ---" << std::endl;

  Zombie *heapZombie1 = newZombie("HeapZombie1");
  heapZombie1->announce();

  Zombie *heapZombie2 = newZombie("HeapZombie2_Another");
  heapZombie2->announce();

  std::cout << "\n--- Testing randomChump (Stack Allocation) ---" << std::endl;

  randomChump("StackZombie1");
  randomChump("StackZombie2_Another");

  std::cout << "\n--- Stack Zombie from main (for comparison) ---" << std::endl;

  Zombie stackZombieInMain("MainStackZombie");
  stackZombieInMain.announce();

  std::cout << "\n--- Deleting Heap-Allocated Zombies ---" << std::endl;

  delete heapZombie1;
  delete heapZombie2;

  std::cout << "--- Program End ---" << std::endl;
  return 0;
}
