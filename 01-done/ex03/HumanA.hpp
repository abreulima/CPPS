/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.lista42.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:41:22 by ide-abre          #+#    #+#             */
/*   Updated: 2026/05/15 19:41:23 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string name, Weapon &w);
    void attack();

private:
    std::string name;
    Weapon &weapon; // Human A MUST have a Weapown, making the use of refs. ideal
};

#endif