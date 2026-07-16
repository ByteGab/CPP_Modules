/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:25:48 by gafreire          #+#    #+#             */
/*   Updated: 2026/07/16 10:09:39 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <climits>

BitcoinExchange::BitcoinExchange()
{
    
}
BitcoinExchange::~BitcoinExchange()
{
    
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
    {
        _db = other._db;
    }
    return (*this);
}

void BitcoinExchange::loadData(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);

    while (std::getline(file, line))
    {
        size_t pos = line.find(',');
        if (pos == std::string::npos)
            continue;

        std::string date  = line.substr(0, pos);
        std::string price = line.substr(pos + 1);

        float value = std::strtof(price.c_str(), NULL);
        _db[date] = value;
    }
}

bool BitcoinExchange::isValidDate(const std::string& date) const
{

    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return (false);
        
    int month = std::atoi(date.substr(5, 2).c_str());
    int day   = std::atoi(date.substr(8, 2).c_str());
    
    for (size_t i = 0; i < date.length(); i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (!std::isdigit(date[i]))
            return (false);
    }
    
    if (month < 1 || month > 12 || day < 1 || day > 31)
        return (false);
    return (true);
}

bool BitcoinExchange::isValidValue(const std::string& valueStr, float& value) const
{
    char *endptr;
    float val = std::strtof(valueStr.c_str(), &endptr);
    
    if (endptr == valueStr.c_str() || *endptr != '\0')
        return (false);
        
    if (val < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return (false);
    }
    
    if (val > 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;
        return (false);
    }
    
    value = val;
    return (true);
}

float BitcoinExchange::getRate(const std::string& date) const
{
    std::map<std::string, float>::const_iterator it = _db.lower_bound(date);
    
    if (it == _db.end() || it->first != date)
    {
        if (it == _db.begin())
            return (-1);
        --it;
    }
    return (it->second);
    
}

void BitcoinExchange::processInput(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return ;
    }

    std::string line;
    std::getline(file, line);

    while (std::getline(file, line))
    {
        if (line.empty())
            continue ;
        size_t pos = line.find(" | ");
        
        if (pos == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue ;
        }

        std::string date     = line.substr(0, pos);
        std::string valueStr = line.substr(pos + 3);

        if (!isValidDate(date))
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue ;
        }

        char *ep;
        std::strtof(valueStr.c_str(), &ep);
        
        if (ep == valueStr.c_str() || *ep != '\0')
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue ;
        }
        
        float value;
        if (!isValidValue(valueStr, value))
            continue ;

        float rate = getRate(date);
        if (rate < 0)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue ;
        }

        std::cout << date << " => " << value << " = " << value * rate << std::endl;
    }
}