#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
  ScavTrap scavvie("scavvie");
  scavvie.attack("target");
  scavvie.takeDamage(2);
  scavvie.beRepaired(1);
  scavvie.takeDamage(100);
  scavvie.attack("target");
  scavvie.beRepaired(2);

  ScavTrap scavvie2(scavvie);
  scavvie2.attack("target");

  return (0);
}
