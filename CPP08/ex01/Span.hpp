/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 20:57:47 by gafreire          #+#    #+#             */
/*   Updated: 2026/06/29 11:02:00 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		unsigned int		_maxSize;
		std::vector<int>	_numbers;
	
	    public:
	
	    	Span(void);
	    	Span(unsigned int n);
	    	Span(const Span& other);
	    	Span& operator=(const Span& other);
	    	~Span();
	
	    	void	addNumber(int number);
	    	int		shortestSpan() const;
	    	int		longestSpan() const;
	
	    	template <typename InputIterator>
	    	void	addRange(InputIterator begin, InputIterator end);
};

template <typename InputIterator>
void	Span::addRange(InputIterator begin, InputIterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		++begin;
	}
}

#endif