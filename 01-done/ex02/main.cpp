/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.lista42.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:41:16 by ide-abre          #+#    #+#             */
/*   Updated: 2026/05/15 19:41:17 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{   
    // References are an alias to a variable, 
    // can't be null, or have its reference changed
    // easier syntax

    std::string string = "HI THIS IS BRAIN";

    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "Addresses" << std::endl;
    std::cout << "Memory Address of string: " << &string << "." << std::endl;
    std::cout << "Memory Address of held by stringPTR: " << stringPTR << "." << std::endl;
    std::cout << "Memory Address of held by stringREF: " << &stringREF << "." << std::endl;

    std::cout << std::endl;

    std::cout << "Values" << std::endl;
    std::cout << "Value of string: " << string << "." << std::endl;
    std::cout << "Value of the address pointed by stringPTR: " << *stringPTR << "." << std::endl;
    std::cout << "Value of the address pointed by stringREF: " << stringREF << "." << std::endl;
}