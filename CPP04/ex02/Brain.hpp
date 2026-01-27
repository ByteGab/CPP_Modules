/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:46:30 by gafreire          #+#    #+#             */
/*   Updated: 2026/01/27 17:40:26 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

class Brain
{
    private:
        std::string ideas[100];
    public:
        // constructor default
        Brain(void);
        // assignment operator
        Brain(const Brain &cpy);
        // operator overload
        Brain &operator=(const Brain &cpy);
        // destructor
        ~Brain();

        void setIdea(int index,  std::string idea);
        std::string getIdea(int idex) const;
};

#endif