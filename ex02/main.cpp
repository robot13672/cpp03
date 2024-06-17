/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:20:02 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/17 20:21:21 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
    ClapTrap a("Hero");
    ScavTrap b("Villain");
    FragTrap c("Peasant");

    a.attack("Villain");
    b.attack("Hero");
    c.attack("Peasant");
    
    b.takeDamage(7);
    b.takeDamage(7);
    b.takeDamage(7);
    b.beRepaired(10);

    c.takeDamage(1);
    c.highFivesGuys();
    c.beRepaired(10);
}