#include "PhoneBook.hpp"
#include <cctype>
#include <string>

bool  is_printibale(std::string to_check)
{
  for (size_t i = 0; i < to_check.length(); i++)
  {
    if (!std::isprint(to_check[i]))
      return false;
  }
  return true;
}

std::string PhoneBook::_adjust_string(std::string str)
{
  size_t str_len = str.size();
  if (str_len > MAX_STR_LEN)
    return (str.substr(0, MAX_STR_LEN - 1) + ".");
  else if (str_len < MAX_STR_LEN)
    return std::string(MAX_STR_LEN - str_len, ' ') + str;
  return str;
}

PhoneBook::PhoneBook()
{
  _count = 0;
  _search_available = 0;
}

void PhoneBook::add()
{
  std::string input;
  input = "";
  while (!input.compare("") || !is_printibale(input))
  {
    std::cout << "enter first name: ";
    if (std::getline(std::cin, input) )
        this->_contacts[this->_count % 8].set_first_name(input); 
    else 
      exit(1);
  }
  input = "";
  while (!input.compare("") || !is_printibale(input))
  {
    std::cout << "enter last name: ";
    if (std::getline(std::cin, input) )
        this->_contacts[this->_count % 8].set_last_name(input); 
    else 
      exit(1);
  }
  input = "";
  while (!input.compare("") || !is_printibale(input))
  {
    std::cout << "enter nickname: ";
    if (std::getline(std::cin, input) )
        this->_contacts[this->_count % 8].set_nickname(input); 
    else 
      exit(1);
  }
  input = "";
  while (!input.compare("") || !is_printibale(input))
  {
    std::cout << "enter phone number: ";
    if (std::getline(std::cin, input) )
       this->_contacts[this->_count % 8].set_number(input); 
    else 
      exit(1);
  }
  input = "";
  while (!input.compare("") || !is_printibale(input))
  {
    std::cout << "enter darckest secret: ";
    if (std::getline(std::cin, input) )
       this->_contacts[this->_count % 8].set_darckest(input); 
    else 
      exit(1);
  }
  this->_count++;
  if (this->_count <= 8)
    this->_search_available++;
}

void PhoneBook::show_info(const Contact contact, size_t displayIndex)
{
    std::ostringstream os_index;
    os_index << displayIndex;
    std::string index_str = os_index.str();
    std::string index = os_index.str();

    std::cout << "|" << _adjust_string(index) << "|";
    std::cout << _adjust_string(contact.get_first_name()) << "|";
    std::cout << _adjust_string(contact.get_last_name()) << "|";
    std::cout << _adjust_string(contact.get_nickname()) << "|" << std::endl;
    std::cout << std::string(MAX_STR_LEN * 4 + 5, '-') << std::endl;

}

void PhoneBook::display_contact_inf(Contact contact)
{
  if (contact.get_first_name().empty())
	{
		std::cout << "Failed to get infos" << std::endl;
		return ;
	}
  std::cout << "-------------------------------------" << std::endl;
  std::cout << "First Name: " << contact.get_first_name() << std::endl;
  std::cout << "Last Name: " << contact.get_last_name() << std::endl;
  std::cout << "Nickname: " << contact.get_nickname() << std::endl;
  std::cout << "Phone Number: " << contact.get_number() << std::endl;
  std::cout << "Darkest Secret: " << contact.get_darckest() << std::endl;
  std::cout << "-------------------------------------" << std::endl;
}

void PhoneBook::info_index() 
{
  std::string input;

  while (!std::cin.eof())
  {
    std::cout << "Enter the contact number to display details (1-" << this->_search_available << "): "; 
    if (std::getline(std::cin, input) && input != "")
		{
			if (input.size() == 1 && input[0] >= '1' && input[0] <= '8' && (input[0] - '0' - 1) < this->_search_available)
				break ;
		}
		if (input != "")
			std::cout << "Invalid index!" << std::endl;
	}
	if (!std::cin.eof())
		display_contact_inf(this->_contacts[input[0] - 1 - '0']);
}

void PhoneBook::search()
{
  size_t display_to_user_index ;
  if (this->_count == 0)
  {
    std::cout << "The PhoneBook is empty. Use the ADD command to add a new contact." << std::endl;
    return ;
  }
  std::cout << std::string(MAX_STR_LEN * 4 + 5, '-') << std::endl;
  std::cout << "|" << _adjust_string("Index") << "|";
  std::cout << _adjust_string("First Name") << "|";
  std::cout << _adjust_string("Last Name") << "|";
  std::cout << _adjust_string("Nickname") << "|" << std::endl;
  std::cout << std::string(MAX_STR_LEN * 4 + 5, '-') << std::endl;
  for (int i = 0; i < this->_search_available; ++i)
  {
    display_to_user_index = i + 1;
    show_info(this->_contacts[i], display_to_user_index);
  }
  info_index();

}
