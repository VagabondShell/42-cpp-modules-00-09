#include "Contact.hpp"

const std::string& Contact::get_first_name() const
{
  return (first_name);
}

const std::string& Contact::get_last_name() const
{
  return (last_name);
}

const std::string& Contact::get_nickname() const
{
  return (nickname);
}

const std::string& Contact::get_number() const
{
  return (phone_number);
}

const std::string& Contact::get_darckest() const
{
  return (darkest_secre);
}

void Contact::set_first_name(const std::string &new_s) 
{
  first_name = new_s;
}

void Contact::set_last_name(const std::string &new_s) 
{
  last_name = new_s;
}

void Contact::set_nickname(const std::string &new_s) 
{
  nickname = new_s;
}

void Contact::set_number(const std::string &new_s) 
{
  phone_number = new_s;
}

void Contact::set_darckest(const std::string &new_s) 
{
  darkest_secre = new_s;
}
