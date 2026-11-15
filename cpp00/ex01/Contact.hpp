#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact {
private:
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_number;
  std::string darkest_secre;

public:
  const std::string& get_first_name() const;
 const std::string& get_last_name() const;
 const std::string& get_nickname() const;
 const std::string& get_number() const;
 const std::string& get_darckest() const;
  void set_first_name(const std::string& new_s);
  void set_last_name(const std::string& new_s);
  void set_nickname(const std::string& new_s);
  void set_number(const std::string& new_s);
  void set_darckest(const std::string& new_s);
};
#endif
