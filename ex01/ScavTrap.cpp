/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:55:38 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/17 20:00:31 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Constructor inited!" << std::endl;
    this->name = name;
    this->hp = 100;
    this->ep = 50;
    this->dmg = 20;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Constructor without parameters inited!" << std::endl;
    this->name = "NoName";
    this->hp = 100;
    this->ep = 50;
    this->dmg = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " is destroyed!" << std::endl;
}

void    ScavTrap::attack(const std::string & target)
{
    if(this->hp <= 0)
        std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
    else if(this->ep <= 0)
        std::cout << "ScavTrap " << this->name << " is out of energy!" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
        this->ep -= 1;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is in guard mode!" << std::endl;
}
