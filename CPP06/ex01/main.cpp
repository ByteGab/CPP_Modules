/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:56:25 by gafreire          #+#    #+#             */
/*   Updated: 2026/06/11 18:17:05 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define RED     "\033[1;31m"
#define YELLOW  "\033[1;33m"
#define CYAN    "\033[1;36m"
#define MAGENTA "\033[1;35m"

int main(void)
{
	Data original;
	original.name = "Gabi";
	original.value = 42;

	std::cout << std::endl << CYAN << "━━━ Original Data ━━━" << RESET << std::endl;
	std::cout << YELLOW << "Address:  " << RESET << MAGENTA << &original << RESET << std::endl;
	std::cout << YELLOW << "Name:     " << RESET << GREEN << original.name << RESET << std::endl;
	std::cout << YELLOW << "Value:    " << RESET << GREEN << original.value << RESET << std::endl;

	uintptr_t raw = Serializer::serialize(&original);
	std::cout << std::endl << CYAN << "━━━ Serialized ━━━" << RESET << std::endl;
	std::cout << YELLOW << "Raw value: " << RESET << MAGENTA << raw << RESET << std::endl;

	Data* deserialized = Serializer::deserialize(raw);
	std::cout << std::endl << CYAN << "━━━ Deserialized ━━━" << RESET << std::endl;
	std::cout << YELLOW << "Address:  " << RESET << MAGENTA << deserialized << RESET << std::endl;
	std::cout << YELLOW << "Name:     " << RESET << GREEN << deserialized->name << RESET << std::endl;
	std::cout << YELLOW << "Value:    " << RESET << GREEN << deserialized->value << RESET << std::endl;

	std::cout << std::endl << CYAN << "━━━ Comparison ━━━" << RESET << std::endl;
	if (deserialized == &original)
		std::cout << GREEN << "✓ SUCCESS: Pointers match!" << RESET << std::endl;
	else
		std::cout << RED << "✗ FAILURE: Pointers don't match!" << RESET << std::endl;
	std::cout << std::endl;

	return (0);
}
