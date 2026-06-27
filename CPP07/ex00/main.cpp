/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:43:48 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/27 21:08:42 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define YELLOW	"\033[1;33m"
#define CYAN	"\033[1;36m"
#define MAGENTA	"\033[1;35m"
#define RESET	"\033[0m"

int main(void)
{
	int a = 2;
	int b = 3;

	std::cout << std::endl << YELLOW "--- Test Subject ---" RESET << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	std::cout << std::endl << YELLOW "--- Equality test (int) ---" RESET << std::endl;

	int e = 42;
	int f = 42;

	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f);

	if (&::min(e, f) == &f)
		std::cout << GREEN " [OK returns second]" RESET << std::endl;
	else
		std::cout << RED " [KO should return second]" RESET << std::endl;
	
	std::cout << "max(e, f) = " << ::max(e, f);

	if (&::max(e, f) == &f)
		std::cout << GREEN " [OK returns second]" RESET << std::endl;
	else
		std::cout << RED " [KO should return second]" RESET << std::endl;

	std::cout << std::endl << MAGENTA "--- Negative numbers ---" RESET << std::endl;

	int g = -10;
	int h = -3;

	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
	std::cout << "max(g, h) = " << ::max(g, h) << std::endl;
	::swap(g, h);
	std::cout << "After swap: g = " << g << ", h = " << h << std::endl;

	std::cout << std::endl << GREEN "--- Doubles ---" RESET << std::endl;

	double i = 3.14;
	double j = 2.71;

	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "min(i, j) = " << ::min(i, j) << std::endl;
	std::cout << "max(i, j) = " << ::max(i, j) << std::endl;
	::swap(i, j);
	std::cout << "After swap: i = " << i << ", j = " << j << std::endl;

	std::cout << std::endl << RED "--- Chars ---" RESET << std::endl;

	char k = 'a';
	char l = 'z';

	std::cout << "k = " << k << ", l = " << l << std::endl;
	std::cout << "min(k, l) = " << ::min(k, l) << std::endl;
	std::cout << "max(k, l) = " << ::max(k, l) << std::endl;
	::swap(k, l);
	std::cout << "After swap: k = " << k << ", l = " << l << std::endl;

	std::cout << std::endl << YELLOW "--- String equality ---" RESET << std::endl;

	std::string m = "same";
	std::string n = "same";
	std::cout << "m = " << m << ", n = " << n << std::endl;
	std::cout << "min(m, n) = " << ::min(m, n);
	
	if (&::min(m, n) == &n)
		std::cout << GREEN " [OK returns second]" RESET << std::endl;
	else
		std::cout << RED " [KO should return second]" RESET << std::endl;

	std::cout << std::endl;

	return (0);
}
