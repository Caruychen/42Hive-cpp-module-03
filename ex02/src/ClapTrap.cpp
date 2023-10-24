#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
  std::cout \
    << "ClapTrap constructor called. " \
    << name << " was born!"
    << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
  std::cout << "ClapTrap copy constructor called" << std::endl;
  *this = src;
}

ClapTrap  &ClapTrap::operator=(const ClapTrap &rhs)
{
  std::cout << "ClapTrap = operator overload called" << std::endl;
  this->_name = rhs.getName();
  this->_hitPoints = rhs.getHitPoints();
  this->_energyPoints = rhs.getEnergyPoints();
  this->_attackDamage = rhs.getAttackDamage();
  return (*this);
}

ClapTrap::~ClapTrap(void)
{
  std::cout \
    << "ClapTrap destructor called. " \
    << this->_name << " vanished into thin air."
    << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
  if (this->_energyPoints > 0 && this->_hitPoints > 0)
  {
    this->_energyPoints--;
    std::cout \
      << "ClapTrap " << this->_name \
      << " attacks " << target \
      << ", causing " << this->_attackDamage \
      << " points of damage!" \
      << std::endl;
    return ;
  }
  std::string status = this->_hitPoints ? "tired" : "dead";
  std::cout \
    << "ClapTrap " << this->_name \
    << " is too " << status << " to attack!"
    << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->_hitPoints > 0)
  {
    std::string reaction = (this->_hitPoints < amount) ? "OVERKILL!! " : "Ouch! ";
    this->_hitPoints -= std::min(this->_hitPoints, amount);
    std::string outcome = this->_hitPoints ? \
                          "(hit points left: " + std::to_string(this->_hitPoints) + ")" :\
                          "**passes out cold**" ;
    std::cout << reaction \
      << "ClapTrap " << this->_name \
      << " received " << amount \
      << " points of damage! " \
      << outcome << std::endl;
    return ;
  }
  std::cout \
    << this->_name << "'s cold dead body laid there..unresponsive," \
    << " and very dead." \
    << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->_energyPoints > 0 && this->_hitPoints > 0)
  {
    if (this->_hitPoints >= MAX_HIT_POINTS)
    {
      std::cout \
        << "Max hit points reached! (" << MAX_HIT_POINTS << ")" \
        << std::endl;
      return;
    }
    this->_energyPoints--;
    this->_hitPoints += std::min(amount, MAX_HIT_POINTS - this->_hitPoints);
    std::cout \
      << "ClapTrap " << this->_name \
      << " recovers " << amount \
      << " hit points!" \
      << " (hit points left: " << this->_hitPoints << ")" \
      << std::endl;
    return ;
  }
  std::string status = this->_hitPoints ? "tired" : "dead";
  std::cout \
    << "ClapTrap " << this->_name \
    << " is too " << status << " to repair!"
    << std::endl;
}

std::string   ClapTrap::getName(void) const
{
  return (this->_name);
}

unsigned int  ClapTrap::getHitPoints(void) const
{
  return (this->_hitPoints);
}

unsigned int  ClapTrap::getEnergyPoints(void) const
{
  return (this->_energyPoints);
}

unsigned int  ClapTrap::getAttackDamage(void) const
{
  return (this->_attackDamage);
}
