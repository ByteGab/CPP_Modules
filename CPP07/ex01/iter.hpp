/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 13:43:54 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/28 14:07:15 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *array, unsigned int length, void (*func)(T &))
{
    for(unsigned int i = 0;i < length; i++)
    {
        func(array[i]);
    }
}

template <typename T>
void iter(T const *array, unsigned int length, void (*func)(T const &))
{
    for(unsigned int i = 0;i < length; i++)
    {
        func(array[i]);
    }
}

#endif