/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:43:37 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/27 20:59:42 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T const & min(T const &a, T const &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename T>
T const & max(T const &a, T const &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

#endif