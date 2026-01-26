/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:46:30 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/26 22:50:08 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        // constructor default
        Brain(void);
        // constructor
        Brain(std::string type);
        // assignment operator
        Brain(const Brain &cpy);
        // operator overload
        Brain &operator=(const Brain &cpy);
        // destructor
        ~Brain();
};

#endif