#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
  // orthodox canonical form
  ClapTrap(void);
  ClapTrap(std::string const &name);
  ClapTrap(ClapTrap const &other);
  ClapTrap &operator=(ClapTrap const &other);
  ~ClapTrap(void);
  // actions
  void attack(std::string const &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  // tests
  void printStatus(void) const;
  void setAttackDamage(unsigned int amount);

private:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;
};

#endif