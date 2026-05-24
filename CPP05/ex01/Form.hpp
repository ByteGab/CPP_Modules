/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:53:13 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 19:40:51 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeSign;
        const int _gradeExec;
        
    public:
        Form(void);
        Form(std::string const &name, int gradeSign, int gradeExec);
        Form(const Form &cpy);
        ~Form();
        
        Form &operator=(const Form &cpy);
        
        std::string const &getName() const;
        bool getIsSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;

        void beSigned(Bureaucrat const &bureaucrat);

        class GradeTooHighException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };

};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif