#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include <string>

#include "Contact.hpp"
#include "phonebook_constants.hpp"

namespace phonebook {
class PhoneBook {
 private:
  Contact contacts[8];
  int lastIdx;
  int count;
  void _printErr(int errCode) const;

 public:
  PhoneBook(void);
  void showMenu(void) const;
  void showSummary(void) const;
  void terminate(void) const;
  void add(void);
  void search(void) const;
  void extra(void) const;
};
}  // namespace phonebook

#endif
