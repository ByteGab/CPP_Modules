/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:56:12 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/25 18:08:55 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cctype> 

class ScalarConverter
{
    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter& src);
        ScalarConverter& operator=(const ScalarConverter& rhs);
        ~ScalarConverter(void);

        static bool isPseudoLiteral(const std::string& literal);
        static bool isChar(const std::string& literal);
        static bool isInt(const std::string& literal);
        static bool isDouble(const std::string& literal);
        static bool isFloat(const std::string& literal);

    public:
        static void convert(const std::string& literal);
};

#endif