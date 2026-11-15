#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define MAX_STR_LEN 10
#include <sstream>
#include <iostream>
#include <cstdlib>

#include "Contact.hpp"
class PhoneBook {
private:
  Contact _contacts[8];
  int _count;
  int _search_available;
  static std::string _adjust_string(std::string str);

public:
  PhoneBook();

  void add();
  void search();
  void info_index();
  void show_info(const Contact contact, size_t displayIndex);
  void display_contact_inf(Contact contact);

};

#endif
