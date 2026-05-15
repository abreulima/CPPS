/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.lista42.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:41:26 by ide-abre          #+#    #+#             */
/*   Updated: 2026/05/15 19:41:27 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon& value);
private:
    std::string name;
    Weapon *weapon; // Human B is less violent, weapons can be null 
};

#endif