#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
  FragTrap fraggie("fraggie");
  fraggie.attack("target");
  fraggie.highFivesGuys();
  fraggie.takeDamage(2);
  fraggie.beRepaired(1);
  fraggie.takeDamage(100);
  fraggie.attack("target");
  fraggie.highFivesGuys();
  fraggie.takeDamage(2);
  fraggie.beRepaired(2);

  FragTrap fraggie2(fraggie);
  fraggie2.attack("target");
  return (0);
}
