#ifndef CLAPTRAQ_HPP
#define CLAPTRAQ_HPP

#include <iostream>

class ClapTrap
{
    private:

        std::string Name;
        int         Hit_points;
        int         Energy_points;
        int         Attack_damage;

    public:

        ClapTrap();
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator = (const ClapTrap& other);
        ~ClapTrap();

        ClapTrap(std::string Name);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string     getclaptrap(void);
        void            setclaptrap(std::string h);
        int             gete(void);
        int             geth(void);
};

#endif
