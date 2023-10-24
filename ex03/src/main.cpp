#include "DiamondTrap.hpp"

int main(void)
{
  DiamondTrap diamond("diamond");
  diamond.whoAmI();
  diamond.attack("target");
  diamond.takeDamage(10);
  diamond.beRepaired(10);
  diamond.guardGate();
  diamond.highFivesGuys();

  diamond.takeDamage(100);
  diamond.beRepaired(10);
  diamond.attack("target");
  diamond.guardGate();
  diamond.highFivesGuys();
  return (0);
}
