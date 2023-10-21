#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

# define MAX_HIT_POINTS 999

class ClapTrap
{
  public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &rhs);
    ~ClapTrap(void);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string   getName(void) const;
    unsigned int  getHitPoints(void) const;
    unsigned int  getEnergyPoints(void) const;
    unsigned int  getAttackDamage(void) const;
      
  private:
    std::string   _name;
    unsigned int  _hitPoints;
    unsigned int  _energyPoints;
    unsigned int  _attackDamage;
};

#endif
