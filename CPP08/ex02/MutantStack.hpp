/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 13:24:22 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/31 17:40:53 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator       iterator;
        typedef typename Container::const_iterator const_iterator;
    
        MutantStack(void) {}
        MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {}
        MutantStack &operator=(const MutantStack &other)
        {
            std::stack<T, Container>::operator=(other);
            return (*this);
        }
        ~MutantStack() {}
    
        iterator begin() { return this->c.begin(); }
        iterator end()   { return this->c.end(); }
    
        const_iterator begin() const { return this->c.begin(); }
        const_iterator end()   const { return this->c.end(); }
};

#endif
