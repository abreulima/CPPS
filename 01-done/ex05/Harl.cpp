/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.lista42.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:41:39 by ide-abre          #+#    #+#             */
/*   Updated: 2026/05/15 19:41:40 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void)
{
    std::cout << "[DEBUG]: love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!"
              << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO]: I cannot believe adding extra bacon costs more money.\nYou didn't putenough bacon in my burger !If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]: I think I deserve to have some extra bacon for free.\nI've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now." << std::endl;
}

// Some obscure code
// An array of ptrs to methods of a class
void Harl::complain(std::string level)
{
    void (Harl::*methodsPTRs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (complains[i] == level)
            (this->*methodsPTRs[i])();
    }
}