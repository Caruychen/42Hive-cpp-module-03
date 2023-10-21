#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
  ScavTrap scavvie("scavvie");
  scavvie.attack("target");
  scavvie.takeDamage(2);
  scavvie.beRepaired(1);
  scavvie.takeDamage(2);
  scavvie.takeDamage(2);
  scavvie.takeDamage(2);
  scavvie.takeDamage(2);
  scavvie.takeDamage(2);
  scavvie.takeDamage(2);
  scavvie.attack("target");
  scavvie.beRepaired(2);

  ScavTrap scavvie2(scavvie);

  return (0);
}
