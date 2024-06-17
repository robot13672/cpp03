/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:20:06 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/17 20:01:29 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor inited!" << std::endl;
    this->name = name;
    this->hp = 10;
    this->ep = 10;
    this->dmg = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Constructor without parameters inited!" << std::endl;
    this->name = "NoName";
    this->hp = 10;
    this->ep = 10;
    this->dmg = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " is destroyed!" << std::endl;
}

void    ClapTrap::attack(const std::string & target)
{
    if(this->hp <= 0)
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
    else if(this->ep <= 0)
        std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
        this->ep -= 1;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hp > 0)
    {
        this->hp -= amount;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!";
        if (this->hp <= 0)
            std::cout << std::endl <<"ClapTrap " << this->name << " is dead!" << std::endl;
        else
            std::cout << " | HP: remaining " << this->hp << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(this->hp > 0)
    {
        if(this->ep <= 0)
            std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
        else
        {
            this->hp += amount;
            this->ep -= 1;
            std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points!" << " | HP: remaining " << this->hp << std::endl;
        }
    }
}