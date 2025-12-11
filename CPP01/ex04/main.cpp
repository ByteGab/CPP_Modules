/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:53:38 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/11 17:02:07 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main (int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Error arguments invalids" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cout << "Error file" << std::endl;
        return (1);
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string text = buffer.str();
    file.close();
    if (!s1.empty())
    {
        size_t pos = text.find(s1);
        while (pos != std::string::npos)
        {
            text.erase(pos, s1.length());
            text.insert(pos, s2);
            pos = text.find(s1, pos + s2.length());
        }
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open()) 
        return (1);
    outfile << text;
    outfile.close();
    return (0);
}