/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:20:02 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/13 14:56:30 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Illia");
    claptrap.attack("enemy");
    claptrap.takeDamage(4);
    claptrap.beRepaired(5);
}