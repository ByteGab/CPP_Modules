/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:42:01 by gafreire          #+#    #+#             */
/*   Updated: 2026/06/03 15:59:40 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class AForm;

class  Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
        
    public:
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat &cpy);
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat &operator=(const Bureaucrat &cpy);
        ~Bureaucrat();
        
        std::string getName() const;      
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(AForm &form);
        void executeForm(AForm const & form);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();           
        };
};
std::ostream &operator<<(std::ostream &src, Bureaucrat const &other);

#endif