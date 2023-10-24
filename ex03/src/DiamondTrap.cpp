#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
  std::cout \
    << "DiamondTrap constructor called" \
    << " name: " << this->_name \
    << std::endl;
  this->_hitPoints = FragTrap::_hitPoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
  std::cout \
    << "DiamondTrap copy constructor called" \
    << std::endl;
  *this = src;
}

DiamondTrap  &DiamondTrap::operator=(const DiamondTrap &rhs)
{
  std::cout \
    << "DiamondTrap = operator overload called" \
    << std::endl;
  this->_name = rhs.getName();
  this->_hitPoints = rhs.getHitPoints();
  this->_energyPoints = rhs.getEnergyPoints();
  this->_attackDamage = rhs.getAttackDamage();
  return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
  std::cout \
    << "DiamondTrap destructor called" \
    << " name: " << this->_name \
    << std::endl;
}

void  DiamondTrap::attack(const std::string &target)
{
  ScavTrap::attack(target);
}

void  DiamondTrap::whoAmI(void)
{
  std::cout \
    << "DiamondTrap name: " << this->_name \
    << " ClapTrap name: " << ClapTrap::getName() \
    << std::endl;
}
