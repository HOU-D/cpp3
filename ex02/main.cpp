/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:17:46 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/08 01:30:30 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap FragTrap1 ("houda");
    std:: cout << std::endl;

    FragTrap1.highFivesGuys();
    std:: cout << std::endl;

    FragTrap1.attack("loubna");
    std:: cout << std::endl;

    return 0;
}