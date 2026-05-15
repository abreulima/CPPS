/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.lista42.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:41:36 by ide-abre          #+#    #+#             */
/*   Updated: 2026/05/15 19:41:37 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool fileIsGood(const std::string &path)
{
    std::ifstream file(path.c_str());
    return file.is_open();
}

bool replace(const std::string &file, const std::string &search, const std::string &replaceStr)
{
    std::ifstream input(file.c_str());
    if (!input.is_open())
        return false;

    std::ofstream outputFile((file + ".replace").c_str());
    if (!outputFile.is_open())
        return false;

    bool first = true;
    std::string line;
    while (std::getline(input, line))
    {

        if (!search.empty() && search != replaceStr)
        {
            size_t pos = 0;

            while ((pos = line.find(search, pos)) != std::string::npos)
            {
                line.erase(pos, search.length());
                line.insert(pos, replaceStr);
                pos += replaceStr.length();
            }
        }

        if (!first)
            outputFile << '\n';
        first = false;

        outputFile << line;
    }
    return true;
}

int main(int argc, char **argv)
{

    if (argc != 4)
    {
        std::cout << "Invalid number of arguments." << std::endl;
        std::cout << "Usage: ./sad <filename> <search> <replace> " << std::endl;
        return 1;
    }

    const std::string file = argv[1];
    const std::string search = argv[2];
    const std::string replaceStr = argv[3];

    if (search.empty())
    {
        std::cout << "The content of search can't be empty." << std::endl;
        return 1;
    }

    if (!fileIsGood(file))
    {
        std::cout << "Unable to open file " << file << "." << std::endl;
        return 1;
    }

    if (replace(file, search, replaceStr))
    {
        std::cout << "File " << file << ".replace" << " created!" << std::endl;
        return 0;
    }

    std::cout << "Unable to create file with replaced content." << std::endl;
    return 1;
}