/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:37:22 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/08 01:21:43 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main()
{
    ScavTrap ScavTrap1 ("houda");
    std:: cout << std::endl;
    
    ScavTrap1.guardGate();
    std:: cout << std::endl;
    
    ScavTrap1.attack("loubna");
    std:: cout << std::endl;

    return 0;
}