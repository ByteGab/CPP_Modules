/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 19:17:00 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/26 19:38:50 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define RST		"\033[0m"
#define BOLD	"\033[1m"
#define DIM		"\033[2m"
#define RED		"\033[1;31m"
#define GRN		"\033[1;32m"
#define YEL		"\033[1;33m"
#define BLU		"\033[1;34m"
#define MAG		"\033[1;35m"
#define CYN		"\033[1;36m"
#define WHT		"\033[1;37m"


Base	*generate(void)
{
	int	random = rand() % 3;

	if (random == 0)
		return (new A());
	else if (random == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << GRN "A" RST << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << MAG "B" RST << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << BLU "C" RST << std::endl;
	else
		std::cout << RED "Unknown type" RST << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << GRN "A" RST << std::endl;
		return ;
	}
	catch (...) {}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << MAG "B" RST << std::endl;
		return ;
	}
	catch (...) {}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << BLU "C" RST << std::endl;
		return ;
	}
	catch (...) {}
	std::cout << RED "Unknown type" RST << std::endl;
}

int	main(void)
{
	srand(time(NULL));

	std::cout << std::endl;
	std::cout << CYN "[ Identify Real Type ]" RST << std::endl;

	std::cout << std::endl;
	std::cout << YEL "━━━ Random Generation Tests ━━━" RST << std::endl;
	for (int i = 0; i < 5; i++)
	{
		Base	*obj = generate();

		std::cout << DIM "  Test " RST YEL << (i + 1) << RST DIM " → " RST;
		std::cout << DIM "ptr: " RST;
		identify(obj);

		std::cout << "         " DIM "ref: " RST;
		identify(*obj);

		delete obj;
	}

	std::cout << std::endl;
	std::cout << YEL "━━━ Manual Verification Tests ━━━" RST << std::endl;

	Base	*a = new A();
	Base	*b = new B();
	Base	*c = new C();

	std::cout << DIM "  A obj  → " RST DIM "ptr: " RST;
	identify(a);
	std::cout << "         " DIM "  ref: " RST;
	identify(*a);

	std::cout << DIM "  B obj  → " RST DIM "ptr: " RST;
	identify(b);
	std::cout << "         " DIM "  ref: " RST;
	identify(*b);

	std::cout << DIM "  C obj  → " RST DIM "ptr: " RST;
	identify(c);
	std::cout << "         " DIM "  ref: " RST;
	identify(*c);

	delete a;
	delete b;
	delete c;

	std::cout << std::endl;

	return (0);
}
