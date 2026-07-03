/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:39:52 by gafreire          #+#    #+#             */
/*   Updated: 2026/07/03 11:23:07 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

#define RESET	"\033[0m"
#define GREEN	"\033[1;32m"
#define RED		"\033[1;31m"
#define CYAN	"\033[1;36m"
#define YELLOW	"\033[1;33m"

int main()
{
	std::cout << CYAN << "━━━ Test with std::vector ━━━" << RESET << std::endl;
	
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);
	
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 30);
		std::cout << GREEN << "✓ Found: " << *it << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "✘ Error: " << e.what() << RESET << std::endl;
	}
	
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 99);
		std::cout << GREEN << "✓ Found: " << *it << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "✘ Error: " << e.what() << RESET << std::endl;
	}

	std::cout << std::endl << CYAN << "━━━ Test with std::list ━━━" << RESET << std::endl;
	
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(15);
	lst.push_back(25);
	
	try
	{
		std::list<int>::iterator it = easyfind(lst, 15);
		std::cout << GREEN << "✓ Found: " << *it << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "✘ Error: " << e.what() << RESET << std::endl;
	}

	std::cout << std::endl << CYAN << "━━━ Test with std::deque ━━━" << RESET << std::endl;
	
	std::deque<int> deq;
	deq.push_back(1);
	deq.push_back(2);
	deq.push_back(3);
	
	try
	{
		std::deque<int>::iterator it = easyfind(deq, 1);
		std::cout << GREEN << "✓ Found: " << *it << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "✘ Error: " << e.what() << RESET << std::endl;
	}

	std::cout << std::endl << CYAN << "━━━ Test with empty container ━━━" << RESET << std::endl;
	
	std::vector<int> empty;
	try
	{
		std::vector<int>::iterator it = easyfind(empty, 42);
		std::cout << GREEN << "✔  Found: " << *it << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "✘ Error: " << e.what() << RESET << std::endl;
	}

	return (0);
}