#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond("Deathtrap");

    diamond.attack("a bullymong");

    diamond.takeDamage(50);
    diamond.beRepaired(25);

    diamond.whoAmI();

    return 0;
}
