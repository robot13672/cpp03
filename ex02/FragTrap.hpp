/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:07:17 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/17 20:16:42 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        void highFivesGuys(void);
        void attack(const std::string & target);
};

#endif
