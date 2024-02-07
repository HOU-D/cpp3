#ifndef FRAGTRAP_CPP
#define FRAGTRAP_CPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    
        FragTrap();
        FragTrap(std::string Name);
        FragTrap& operator = (const FragTrap& other);
        ~FragTrap();

        FragTrap(const FragTrap& other);
        
        void highFivesGuys(void);
};

#endif