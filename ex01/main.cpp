/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:37:22 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/07 23:39:48 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main()
{
    ScavTrap ScavTrap1 ("houda");

    ScavTrap1.guardGate();
    ScavTrap1.attack("loubna");
    //std::cout <<ScavTrap1.h() << std::endl;

    return 0;
}