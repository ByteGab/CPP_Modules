/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:26:10 by gafreire          #+#    #+#             */
/*   Updated: 2026/07/14 12:34:52 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange
{
    private:
        std::map<std::string, float> _db;
        bool isValidDate(const std::string& date) const;
        bool isValidValue(const std::string& valueStr, float& value) const;
        float getRate(const std::string& date) const;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
    
        void loadData(const std::string& filename);
        void processInput(const std::string& filename);
};

#endif