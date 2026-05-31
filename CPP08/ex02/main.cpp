/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 13:24:22 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/31 18:44:12 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define CYAN    "\033[1;36m"
#define YELLOW  "\033[1;33m"
#define MAGENTA "\033[1;35m"

static void testMutantStack()
{
    std::cout << std::endl << CYAN << "=== MutantStack<int> ===" << RESET << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << GREEN << "  top()  → " << RESET << mstack.top() << std::endl;
    mstack.pop();
    std::cout << GREEN << "  size() → " << RESET << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << std::endl;
    std::cout << YELLOW << "  Iterating with begin() -> end():" << RESET << std::endl;

    MutantStack<int>::iterator it  = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << MAGENTA << "    " << *it << RESET << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);
    std::cout << GREEN << "  Copy to std::stack OK ✓" << RESET << std::endl;
}

static void testList()
{
    std::cout << std::endl << CYAN << "=== std::list<int> ===" << RESET << std::endl;

    std::list<int> lst;

    lst.push_back(5);
    lst.push_back(17);

    std::cout << GREEN << "  back()  → " << RESET << lst.back() << std::endl;
    lst.pop_back();
    std::cout << GREEN << "  size()  → " << RESET << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::cout << std::endl;
    std::cout << YELLOW << "  Iterating with begin() -> end():" << RESET << std::endl;

    std::list<int>::iterator it  = lst.begin();
    std::list<int>::iterator ite = lst.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << MAGENTA << "    " << *it << RESET << std::endl;
        ++it;
    }
}

static void testConstIterator()
{
    std::cout << std::endl << CYAN << "=== const_iterator ===" << RESET << std::endl;

    MutantStack<int> mstack;
    mstack.push(10);
    mstack.push(20);
    mstack.push(30);

    const MutantStack<int> &cmstack = mstack;

    std::cout << YELLOW << "  Iterating with const_iterator:" << RESET << std::endl;

    MutantStack<int>::const_iterator it  = cmstack.begin();
    MutantStack<int>::const_iterator ite = cmstack.end();

    while (it != ite)
    {
        std::cout << MAGENTA << "    " << *it << RESET << std::endl;
        ++it;
    }
    std::cout << GREEN << "  const_iterator OK ✓" << RESET << std::endl;
}

int main()
{
    testMutantStack();
    testList();
    testConstIterator();

    return (0);
}
