/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 13:43:43 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/28 14:17:56 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

#define RST   "\033[0m"
#define BOLD  "\033[1m"
#define RED   "\033[1;31m"
#define GRN   "\033[1;32m"
#define YEL   "\033[1;33m"
#define BLU   "\033[1;34m"
#define MAG   "\033[1;35m"
#define CYN   "\033[1;36m"
#define WHT   "\033[1;37m"
#define DIM   "\033[2m"

template <typename T>
void printElement(T const &elem)
{
	std::cout << "  " << DIM << "[" << RST << CYN << elem << RST << DIM << "]" << RST;
}

template <typename T>
void increment(T &elem)
{
	elem += 1;
}

template <typename T>
void doubleValue(T &elem)
{
	elem *= 2;
}

void toUpper(std::string &s)
{
	for (unsigned int i = 0; i < s.length(); i++)
		s[i] = static_cast<char>(std::toupper(s[i]));
}

void printString(std::string const &s)
{
	std::cout << "  " << DIM << "[" << RST << MAG << "\"" << s << "\"" << RST << DIM << "]" << RST;
}



void printHeader(const char *title)
{
	std::cout << std::endl;
	std::cout << BLU << "── " << RST << BOLD << title << RST << BLU << " ──" << RST << std::endl;
}

void printTest(const char *desc)
{
	std::cout << std::endl;
	std::cout << YEL << "  ▸ " << RST << desc << std::endl;
}


int main(void)
{
	std::cout << std::endl;
	std::cout << MAG << BOLD << "── ITER TESTS ──" << RST << std::endl;

	printHeader("INT ARRAY TESTS");
	{
		int arr[] = {1, 2, 3, 4, 5};
		unsigned int len = 5;

		printTest("Print int array (const read)");
		std::cout << "    ";
		iter(arr, len, printElement<int>);
		std::cout << std::endl;

		printTest("Increment all elements (+1)");
		iter(arr, len, increment<int>);
		std::cout << "    ";
		iter(arr, len, printElement<int>);
		std::cout << std::endl;

		printTest("Double all elements (x2)");
		iter(arr, len, doubleValue<int>);
		std::cout << "    ";
		iter(arr, len, printElement<int>);
		std::cout << std::endl;
	}

	printHeader("CONST INT ARRAY TEST");
	{
		int const arr[] = {10, 20, 30, 40, 50};
		unsigned int len = 5;

		printTest("Print const int array (read-only)");
		std::cout << "    ";
		iter(arr, len, printElement<int>);
		std::cout << std::endl;
		std::cout << GRN << "    ✓ Const overload works correctly" << RST << std::endl;
	}

	printHeader("DOUBLE ARRAY TESTS");
	{
		double arr[] = {1.1, 2.2, 3.3, 4.4};
		unsigned int len = 4;

		printTest("Print double array");
		std::cout << "    ";
		iter(arr, len, printElement<double>);
		std::cout << std::endl;

		printTest("Double all values (x2)");
		iter(arr, len, doubleValue<double>);
		std::cout << "    ";
		iter(arr, len, printElement<double>);
		std::cout << std::endl;
	}

	printHeader("CHAR ARRAY TESTS");
	{
		char arr[] = {'a', 'b', 'c', 'd', 'e'};
		unsigned int len = 5;

		printTest("Print char array");
		std::cout << "    ";
		iter(arr, len, printElement<char>);
		std::cout << std::endl;

		printTest("Increment chars (+1 ASCII)");
		iter(arr, len, increment<char>);
		std::cout << "    ";
		iter(arr, len, printElement<char>);
		std::cout << std::endl;
	}

	printHeader("STRING ARRAY TESTS");
	{
		std::string arr[] = {"hello", "world", "forty", "two"};
		unsigned int len = 4;

		printTest("Print string array");
		std::cout << "    ";
		iter(arr, len, printString);
		std::cout << std::endl;

		printTest("Convert to UPPERCASE");
		iter(arr, len, toUpper);
		std::cout << "    ";
		iter(arr, len, printString);
		std::cout << std::endl;
	}

	printHeader("EDGE CASES");
	{
		int arr[] = {42};

		printTest("Array with length 0 (should print nothing)");
		std::cout << "    ";
		iter(arr, 0, printElement<int>);
		std::cout << GRN << "✓ No crash with length 0" << RST << std::endl;

		printTest("Array with single element");
		std::cout << "    ";
		iter(arr, 1, printElement<int>);
		std::cout << std::endl;
	}

	std::cout << std::endl;

	return (0);
}
