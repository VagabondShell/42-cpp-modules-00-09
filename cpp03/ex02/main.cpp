#include "FragTrap.hpp"

int main() {
    FragTrap fragTrap("Claptrap-Prime");
    
    fragTrap.attack("an evil robot");
    
    fragTrap.takeDamage(40);
    fragTrap.beRepaired(25);
    fragTrap.highFivesGuys();
    return 0;
}
