#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
  ClapTrap trappie("trappie");
  trappie.attack("target");
  trappie.takeDamage(2);
  trappie.beRepaired(989);
  trappie.beRepaired(1);
  trappie.takeDamage(2);
  trappie.takeDamage(2);
  trappie.takeDamage(2);
  trappie.takeDamage(2);
  trappie.takeDamage(2);
  trappie.takeDamage(2);
  trappie.attack("target");
  trappie.beRepaired(2);

  std::cout << std::endl << "Testing second ClapTrap" << std::endl;
  ClapTrap trappie2("trappie2");
  for (int i = 0; i < 10; i++)
    trappie2.attack("target");
  trappie2.attack("target");
  trappie2.takeDamage(2);
  trappie2.takeDamage(2);
  trappie2.beRepaired(2);
  trappie2.takeDamage(8);
  trappie2.beRepaired(2);
  return (0);
}
