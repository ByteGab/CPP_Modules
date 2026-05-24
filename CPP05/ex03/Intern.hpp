/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:45:53 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 20:55:47 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
    private:
        AForm *makeShrubbery(const std::string &target) const;
        AForm *makeRobotomy(const std::string &target) const;
        AForm *makePresidential(const std::string &target) const;
    public:
        Intern(void);
        Intern(const Intern &cpy);
        Intern &operator=(const Intern &cpy);
        ~Intern();

        AForm *makeForm(const std::string &name, const std::string &target);

};

#endif