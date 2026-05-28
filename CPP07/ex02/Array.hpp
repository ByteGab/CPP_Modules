/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:21:34 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/28 18:35:37 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
    private:
        T *_data;
        unsigned int _size;
    public:
        Array(void);
        Array(const Array &cpy);
        Array(unsigned int n);
        Array &operator=(const Array &cpy);
        ~Array();
        T &operator[](unsigned int index);
        const T &operator[](unsigned int index) const;
        unsigned int size(void) const;
};

#include "Array.tpp"

#endif