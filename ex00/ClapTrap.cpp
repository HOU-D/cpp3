/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:13:16 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/07 14:00:47 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap " << Name << " has been created!" << std::endl;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
}

std::string ClapTrap::geth(void)
{
    return(Name);
}


void    ClapTrap::seth(std::string h) 
{
    Name = h;
}

ClapTrap::ClapTrap(std::string Name)
{
    this->Name = Name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "ClapTrap " << Name << " has been created!" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& other)
{
    Name = other.Name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points = Energy_points  - 1 ;
    }
    else
    {
        std::cout << "ClapTrap " << Name << " has no energy points left and can't attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Hit_points = Hit_points  - amount ;
        std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << Name << " has no hit points left and can't take any more damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!Hit_points || !Energy_points)
	{
		std::cout << "ClapTrap "<< Name << " can’t do anything\n";
		return ;
	}
    
    Hit_points = Hit_points  + amount;
    Energy_points = Energy_points  - 1;
    std::cout << "ClapTrap " << Name << " is being repaired and gains " << amount << " hit points back!" << std::endl;
}