/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 20:57:36 by gafreire          #+#    #+#             */
/*   Updated: 2026/06/29 10:49:21 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

#define RESET	"\033[0m"
#define GREEN	"\033[1;32m"
#define RED		"\033[1;31m"
#define YELLOW	"\033[1;33m"
#define CYAN	"\033[1;36m"

int main()
{
	std::cout << CYAN << "━━━ Test 1: Subject example ━━━" << RESET << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << GREEN << sp.shortestSpan() << RESET << std::endl;
		std::cout << GREEN << sp.longestSpan() << RESET << std::endl;
	}

	std::cout << std::endl << CYAN << "━━━ Test 2: Overflow exception ━━━" << RESET << std::endl;
	{
		try
		{
			Span sp(3);
			sp.addNumber(1);
			sp.addNumber(2);
			sp.addNumber(3);
			sp.addNumber(4);
		}
		catch (std::exception& e)
		{
			std::cout << YELLOW << "Caught: " << e.what() << RESET << std::endl;
		}
	}

	std::cout << std::endl << CYAN << "━━━ Test 3: No elements / one element ━━━" << RESET << std::endl;
	{
		Span sp(5);
		try
		{
			sp.shortestSpan();
		}
		catch (std::exception& e)
		{
			std::cout << YELLOW << "Empty span: " << e.what() << RESET << std::endl;
		}
		sp.addNumber(42);
		try
		{
			sp.longestSpan();
		}
		catch (std::exception& e)
		{
			std::cout << YELLOW << "One element: " << e.what() << RESET << std::endl;
		}
	}

	std::cout << std::endl << CYAN << "━━━ Test 4: 10,000 numbers ━━━" << RESET << std::endl;
	{
		Span big(10000);
        
		for (int i = 0; i < 10000; ++i)
			big.addNumber(i);
        
		std::cout << GREEN << "Shortest: " << big.shortestSpan() << RESET << std::endl;
		std::cout << GREEN << "Longest:  " << big.longestSpan() << RESET << std::endl;
	}

	std::cout << std::endl << CYAN << "━━━ Test 5: 100,000 random numbers ━━━" << RESET << std::endl;
	{
		Span huge(100000);
		std::srand(std::time(NULL));
		for (int i = 0; i < 100000; ++i)
			huge.addNumber(std::rand());
		std::cout << GREEN << "Shortest: " << huge.shortestSpan() << RESET << std::endl;
		std::cout << GREEN << "Longest:  " << huge.longestSpan() << RESET << std::endl;
	}

	std::cout << std::endl << CYAN << "━━━ Test 6: addRange with iterators ━━━" << RESET << std::endl;
	{
		std::vector<int> v;
		v.push_back(100);
		v.push_back(200);
		v.push_back(300);
		v.push_back(400);
		v.push_back(500);

		Span sp(5);
		sp.addRange(v.begin(), v.end());
        
		std::cout << GREEN << "Shortest: " << sp.shortestSpan() << RESET << std::endl;
		std::cout << GREEN << "Longest:  " << sp.longestSpan() << RESET << std::endl;
	}

	std::cout << std::endl << CYAN << "━━━ Test 7: addRange overflow ━━━" << RESET << std::endl;
	{
		try
		{
			std::vector<int> v;
			for (int i = 0; i < 10; ++i)
				v.push_back(i);
			Span sp(5);
			sp.addRange(v.begin(), v.end());
		}
		catch (std::exception& e)
		{
			std::cout << YELLOW << "Caught: " << e.what() << RESET << std::endl;
		}
	}

	std::cout << std::endl << CYAN << "━━━ Test 8: Copy and assignment ━━━" << RESET << std::endl;
	{
		Span original(5);
		original.addNumber(10);
		original.addNumber(20);
		original.addNumber(30);

		Span copy(original);
		Span assigned;
		assigned = original;

		original.addNumber(40);

		std::cout << GREEN << "Original longest:  " << original.longestSpan() << RESET << std::endl;
		std::cout << GREEN << "Copy longest:      " << copy.longestSpan() << RESET << std::endl;
		std::cout << GREEN << "Assigned longest:  " << assigned.longestSpan() << RESET << std::endl;
	}

	return (0);
}
