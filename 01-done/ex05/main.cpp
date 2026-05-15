/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.lista42.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:41:45 by ide-abre          #+#    #+#             */
/*   Updated: 2026/05/15 19:41:46 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

int main()
{
    Harl harl = Harl();

    harl.complain("DEBUG");
    std::cout << std::endl;

    harl.complain("INFO");
    std::cout << std::endl;

    harl.complain("WARNING");
    std::cout << std::endl;

    harl.complain("ERROR");

    harl.complain("delulu");

    return (0);
}