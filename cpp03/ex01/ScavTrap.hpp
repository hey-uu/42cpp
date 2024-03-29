#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  // orthodox canonical form
  ScavTrap(void);
  ScavTrap(std::string const &name);
  ScavTrap(ScavTrap const &other);
  ScavTrap &operator=(ScavTrap const &other);
  virtual ~ScavTrap(void);
  // overriding
  virtual void attack(std::string const &target);
  // special
  void guardGate(void);
  // extra
  virtual void printInfo(void) const;
};

#endif