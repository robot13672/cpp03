/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:07:15 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/17 20:22:32 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) 
{
    std::cout << "FragTrap Constructor inited!" << std::endl;
    this->name = name;
    this->hp = 100;
    this->ep = 100;
    this->dmg = 30;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap Constructor without parameters inited!" << std::endl;
    this->name = "NoName";
    this->hp = 100;
    this->ep = 100;
    this->dmg = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor inited!" << std::endl;
}

void    FragTrap::attack(const std::string & target)
{
    if(this->hp <= 0)
        std::cout << "FragTrap " << this->name << " is dead!" << std::endl;
    else if(this->ep <= 0)
        std::cout << "FragTrap " << this->name << " is out of energy!" << std::endl;
    else
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
        this->ep -= 1;
    }
}

void FragTrap::highFivesGuys(void)
{
    if(this->hp > 0)
        std::cout << "FragTrap " << this->name << " gives a high five!" << std::endl;
}