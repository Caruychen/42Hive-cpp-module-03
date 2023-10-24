#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
  std::cout \
    << "ScavTrap constructor called" \
    << " name: " << name \
    << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
  std::cout \
    << "ScavTrap copy constructor called" \
    << std::endl;
  *this = src;
}

ScavTrap  &ScavTrap::operator=(const ScavTrap &rhs)
{
  std::cout \
    << "ScavTrap = operator overload called" \
    << std::endl;
  this->_name = rhs.getName();
  this->_hitPoints = rhs.getHitPoints();
  this->_energyPoints = rhs.getEnergyPoints();
  this->_attackDamage = rhs.getAttackDamage();
  return (*this);
}

ScavTrap::~ScavTrap(void)
{
  std::cout \
    << "ScavTrap destructor called" \
    << " name: " << this->_name \
    << std::endl;
}

void  ScavTrap::attack(const std::string &target)
{
  if (this->_energyPoints > 0 && this->_hitPoints > 0)
  {
    this->_energyPoints--;
    std::cout \
      << "ScavTrap " << this->_name \
      << " attacks " << target \
      << ", causing " << this->_attackDamage \
      << " points of damage!" \
      << std::endl;
    return ;
  }
  std::string status = this->_hitPoints ? "tired" : "dead";
  std::cout \
    << "ScavTrap " << this->_name \
    << " is too " << status << " to attack!"
    << std::endl;
}

void  ScavTrap::guardGate(void)
{
  if (this->_energyPoints > 0 && this->_hitPoints > 0)
  {
    std::cout \
      << "ScavTrap " << this->_name \
      << " has entered Gate keeper mode." \
      << std::endl;
    return ;
  }
  std::string status = this->_hitPoints ? "tired" : "dead";
  std::cout \
    << "ScavTrap " << this->_name \
    << " is " << status
    << std::endl;
}
