/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:20:02 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/16 13:00:48 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // Создаем объект ClapTrap и тестируем его функции
    ClapTrap claptrap("Player 1");
    std::cout << "\n--- Testing ClapTrap ---\n";
    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.takeDamage(10); // Этот вызов должен показать, что ClapTrap мертв
    claptrap.beRepaired(5);  // Этот вызов должен показать, что мертвый ClapTrap не может быть отремонтирован

    // Создаем объект ScavTrap и тестируем его функции
    std::cout << "\n--- Testing ScavTrap ---\n";
    ScavTrap scavtrap("Player 2");
    scavtrap.attack("Illia");
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(30);
    scavtrap.guardGate(); // Тестируем специальную способность guardGate
    
    return 0;
}