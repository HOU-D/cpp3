/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:17:09 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/07 23:48:09 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap " << Name << " has been created!" << std::endl;
    
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << Name << " has been destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& other)
{
    Name = other.Name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    *this = other;
}

ScavTrap::ScavTrap(std::string Name)
{
    std::cout << "ScavTrap " << Name << " has been created!" << std::endl;
    
    this->Name = Name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points = Energy_points  - 1 ;
    }
    else
    {
        std::cout << "ScavTrap " << Name << " has no energy points and hit_points left so can't attack!" << std::endl;
    }
}


int ScavTrap::h()
{
    return getHit();
}
    
