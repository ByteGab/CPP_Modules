/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:34:54 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 20:34:56 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    
    protected:
        virtual void executeAction() const;

    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
        virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &cpy);
        std::string const &getTarget() const;
};

#endif
