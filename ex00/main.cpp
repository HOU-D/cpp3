/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:13:40 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/07 14:01:06 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap1("houda");
    ClapTrap clapTrap2("akoumi");



    clapTrap1.attack("mimi");
    clapTrap2.takeDamage(3);
    clapTrap1.beRepaired(5);

    return 0;
}