/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:21:19 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/28 19:12:56 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
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
	std::cout << MAG << BOLD << "── ARRAY TESTS ──" << RST << std::endl;

	printHeader("EMPTY ARRAY (DEFAULT CONSTRUCTOR)");
	{
		Array<int> empty;

		printTest("Size of empty array");
		std::cout << "    size = " << CYN << empty.size() << RST << std::endl;
		if (empty.size() == 0)
			std::cout << GRN << "    ✓ size() == 0" << RST << std::endl;
		else
			std::cout << RED << "    ✗ Expected size 0" << RST << std::endl;

		printTest("Access out of range on empty array");
		try
		{
			empty[0];
			std::cout << RED << "    ✗ No exception thrown!" << RST << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << GRN << "    ✓ Exception caught for index 0" << RST << std::endl;
		}
	}

	printHeader("SIZED ARRAY (UNSIGNED INT CONSTRUCTOR)");
	{
		Array<int> arr(5);

		printTest("Size check");
		std::cout << "    size = " << CYN << arr.size() << RST << std::endl;
		if (arr.size() == 5)
			std::cout << GRN << "    ✓ size() == 5" << RST << std::endl;

		printTest("Default-initialized values (should be 0 for int)");
		std::cout << "    ";
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << DIM << "[" << RST << CYN << arr[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;

		printTest("Assign values with operator[]");
		for (unsigned int i = 0; i < arr.size(); i++)
			arr[i] = (i + 1) * 10;
		std::cout << "    ";
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << DIM << "[" << RST << CYN << arr[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;
		std::cout << GRN << "    ✓ Values assigned correctly" << RST << std::endl;
	}

	printHeader("COPY CONSTRUCTOR (DEEP COPY)");
	{
		Array<int> original(3);
		original[0] = 42;
		original[1] = 84;
		original[2] = 126;

		Array<int> copy(original);

		printTest("Both arrays have same values after copy");
		std::cout << "    original: ";
		for (unsigned int i = 0; i < original.size(); i++)
			std::cout << DIM << "[" << RST << CYN << original[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;
		std::cout << "    copy:     ";
		for (unsigned int i = 0; i < copy.size(); i++)
			std::cout << DIM << "[" << RST << CYN << copy[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;

		printTest("Modify original, copy must NOT change");
		original[0] = 999;
		original[1] = 888;
		original[2] = 777;
		std::cout << "    original: ";
		for (unsigned int i = 0; i < original.size(); i++)
			std::cout << DIM << "[" << RST << CYN << original[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;
		std::cout << "    copy:     ";
		for (unsigned int i = 0; i < copy.size(); i++)
			std::cout << DIM << "[" << RST << CYN << copy[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;
		if (copy[0] == 42 && copy[1] == 84 && copy[2] == 126)
			std::cout << GRN << "    ✓ Deep copy confirmed: copy unchanged" << RST << std::endl;
		else
			std::cout << RED << "    ✗ Shallow copy detected!" << RST << std::endl;
	}

	printHeader("ASSIGNMENT OPERATOR (DEEP COPY)");
	{
		Array<int> a(3);
		a[0] = 1;
		a[1] = 2;
		a[2] = 3;

		Array<int> b;
		b = a;

		printTest("Assigned array has same values");
		std::cout << "    a: ";
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << DIM << "[" << RST << CYN << a[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;
		std::cout << "    b: ";
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << DIM << "[" << RST << CYN << b[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;

		printTest("Modify a, b must NOT change");
		a[0] = 100;
		a[1] = 200;
		a[2] = 300;
		std::cout << "    a: ";
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << DIM << "[" << RST << CYN << a[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;
		std::cout << "    b: ";
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << DIM << "[" << RST << CYN << b[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;
		if (b[0] == 1 && b[1] == 2 && b[2] == 3)
			std::cout << GRN << "    ✓ Deep copy confirmed: b unchanged" << RST << std::endl;
		else
			std::cout << RED << "    ✗ Shallow copy detected!" << RST << std::endl;

		printTest("Self-assignment (a = a)");
		Array<int>& ref = a;
		a = ref;
		std::cout << "    a: ";
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << DIM << "[" << RST << CYN << a[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;
		std::cout << GRN << "    ✓ No crash on self-assignment" << RST << std::endl;
	}

	printHeader("OUT OF BOUNDS ACCESS");
	{
		Array<int> arr(3);

		printTest("Access index 3 on array of size 3");
		try
		{
			arr[3];
			std::cout << RED << "    ✗ No exception thrown!" << RST << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << GRN << "    ✓ Exception caught for index 3" << RST << std::endl;
		}

		printTest("Access very large index (999999)");
		try
		{
			arr[999999];
			std::cout << RED << "    ✗ No exception thrown!" << RST << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << GRN << "    ✓ Exception caught for index 999999" << RST << std::endl;
		}
	}

	printHeader("STRING ARRAY TEST");
	{
		Array<std::string> arr(3);
		arr[0] = "hello";
		arr[1] = "forty";
		arr[2] = "two";

		printTest("String array values");
		std::cout << "    ";
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << DIM << "[" << RST << MAG << "\"" << arr[i] << "\"" << RST << DIM << "]" << RST;
		std::cout << std::endl;

		printTest("Copy string array and verify independence");
		Array<std::string> copy(arr);
		arr[0] = "CHANGED";
		std::cout << "    original: ";
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << DIM << "[" << RST << MAG << "\"" << arr[i] << "\"" << RST << DIM << "]" << RST;
		std::cout << std::endl;
		std::cout << "    copy:     ";
		for (unsigned int i = 0; i < copy.size(); i++)
			std::cout << DIM << "[" << RST << MAG << "\"" << copy[i] << "\"" << RST << DIM << "]" << RST;
		std::cout << std::endl;
		if (copy[0] == "hello")
			std::cout << GRN << "    ✓ String deep copy works" << RST << std::endl;
		else
			std::cout << RED << "    ✗ String shallow copy detected!" << RST << std::endl;
	}

	printHeader("CONST ARRAY ACCESS");
	{
		Array<int> arr(3);
		arr[0] = 11;
		arr[1] = 22;
		arr[2] = 33;
		const Array<int> constArr(arr);

		printTest("Read from const array");
		std::cout << "    ";
		for (unsigned int i = 0; i < constArr.size(); i++)
			std::cout << DIM << "[" << RST << CYN << constArr[i] << RST << DIM << "]" << RST;
		std::cout << std::endl;
		std::cout << GRN << "    ✓ Const operator[] works" << RST << std::endl;
	}

	std::cout << std::endl;

	return (0);
}
