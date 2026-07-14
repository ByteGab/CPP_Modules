/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:24:42 by gafreire          #+#    #+#             */
/*   Updated: 2026/07/14 13:37:30 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }

    BitcoinExchange btc;
    btc.loadData("data.csv");
    btc.processInput(argv[1]);

    return (0);
}