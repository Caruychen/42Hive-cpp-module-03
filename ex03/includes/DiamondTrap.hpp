#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
  public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &src);
    DiamondTrap &operator=(const DiamondTrap &rhs);
    ~DiamondTrap(void);
    void attack(const std::string &target);
    void whoAmI(void);
};

#endif
