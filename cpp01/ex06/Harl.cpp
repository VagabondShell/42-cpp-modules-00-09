#include "Harl.hpp"
#include <strings.h>


void Harl::debug( void )
{
  std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void Harl::info( void )
{
  std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl ;
}

void Harl::warning( void )
{
  std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
  std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
  if (level.empty())
    return ;
  int index = -1;
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*handlers[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

  for (int i = 0; i < 4; i++)
  {
    if (levels[i] == level)
    {
      index = i;
      break;
    }
  }
  switch (index) {
    case 0:
      (this->*handlers[0])();
      std::cout << std::endl;
      // fallthrough
    case 1: 
      (this->*handlers[1])();
      std::cout << std::endl;
      // fallthrough
    case 2:
      (this->*handlers[2])();
      std::cout << std::endl;
      // fallthrough
    case 3:
      (this->*handlers[3])();
      std::cout << std::endl;
      break; 
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      break;
  }
}
