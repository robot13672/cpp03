/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:20:02 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/15 16:06:49 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Illia");

    claptrap.attack("enemy");
    claptrap.takeDamage(9);

    claptrap.beRepaired(5);

    claptrap.attack("enemy2");

    claptrap.attack("enemy3");
    claptrap.attack("enemy4");

    claptrap.beRepaired(3);

    return 0;
}