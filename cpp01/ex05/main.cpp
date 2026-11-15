#include "Harl.hpp"

int main () {
    Harl harl;

    harl.complain("DEBUG");   
    harl.complain("INFO");   

    std::string my_level = "WARNING";
    harl.complain(my_level);

    harl.complain(""); 
    harl.complain("ERROR");
    harl.complain("INVALID_LEVEL");

    return 0;
}
