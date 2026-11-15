#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap("WALL-E");
    clapTrap.attack("a dusty trash pile");

    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);

    clapTrap.takeDamage(10);
    clapTrap.beRepaired(3);

    clapTrap.takeDamage(10);
    clapTrap.attack("a rusty cockroach");
    clapTrap.beRepaired(3);

    return 0;
}
