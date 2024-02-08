#ifndef SCAVTRAP_CPP
#define SCAVTRAP_CPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

    public:

        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap& operator = (const ScavTrap& other);
        ~ScavTrap();

        ScavTrap(const ScavTrap& other);

        
        void    guardGate();
        void	attack(const std::string &target);

        int     h(void);

};

#endif