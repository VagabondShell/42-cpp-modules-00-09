#include "PhoneBook.hpp"
#include <ostream>
#include <string>


int main () 
{
  PhoneBook ph;
  std::string str;

  while (str != "EXIT")
  {
    std::cout << "Eter one of the three commands. The program only accepts ADD, SEARCH and EXIT: ";
    std::getline(std::cin, str);
    if (str == "ADD")
      ph.add();
    else if (str == "SEARCH")
      ph.search();
    if (std::cin.eof())
    {
      std::cout << std::endl;
      break;
    }
  }
  return 0;
}
