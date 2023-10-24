#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
  std::cout \
    << "FragTrap constructor called" \
    << " name: " << this->_name \
    << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
  std::cout \
    << "FragTrap copy constructor called" \
    << std::endl;
  *this = src;
}

FragTrap  &FragTrap::operator=(const FragTrap &rhs)
{
  std::cout \
    << "FragTrap = operator overload called" \
    << std::endl;
  this->_name = rhs.getName();
  this->_hitPoints = rhs.getHitPoints();
  this->_energyPoints = rhs.getEnergyPoints();
  this->_attackDamage = rhs.getAttackDamage();
  return (*this);
}

FragTrap::~FragTrap(void)
{
  std::cout \
    << "FragTrap destructor called" \
    << " name: " << this->_name \
    << std::endl;
}

void  FragTrap::attack(const std::string &target)
{
  if (this->_energyPoints > 0 && this->_hitPoints > 0)
  {
    this->_energyPoints--;
    std::cout \
      << "FragTrap " << this->_name \
      << " attacks " << target \
      << ", causing " << this->_attackDamage \
      << " points of damage!" \
      << std::endl;
    return ;
  }
  std::string status = this->_hitPoints ? "tired" : "dead";
  std::cout \
    << "FragTrap " << this->_name \
    << " is too " << status << " to attack!"
    << std::endl;
}

void  FragTrap::highFivesGuys(void)
{
  if (this->_energyPoints > 0 && this->_hitPoints > 0)
  {
    std::cout \
      << "FragTrap " << this->_name \
      << " wants to high five!" \
      << std::endl;
      return ;
  }
  std::string status = this->_hitPoints ? "tired" : "dead";
  std::cout \
    << "FragTrap " << this->_name \
    << " is " << status
    << std::endl;
}
