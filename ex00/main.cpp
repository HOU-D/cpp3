/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:13:40 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/08 01:17:26 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap1("houda");
    ClapTrap clapTrap2("akoumi");

    std:: cout << std::endl;
    
    clapTrap1.attack("akoumi");
    std:: cout << "Energy points = " << clapTrap1.gete() << std::endl;
    std:: cout << std::endl;
    
    clapTrap2.takeDamage(3);
    std:: cout << "Hit points = " << clapTrap2.geth() << std::endl;
    std:: cout << std::endl;
    
    clapTrap1.beRepaired(5);
    std:: cout << "Hit points = " << clapTrap1.geth() << std::endl;
    std:: cout << "Energy points = " << clapTrap1.gete() << std::endl;
    std:: cout << std::endl;

    return 0;
}
