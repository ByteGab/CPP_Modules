/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:53:13 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/24 20:02:49 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeSign;
        const int _gradeExec;
        
    public:
        AForm(void);
        AForm(std::string const &name, int gradeSign, int gradeExec);
        AForm(const AForm &cpy);
        virtual ~AForm();
        
        AForm &operator=(const AForm &cpy);
        
        std::string const &getName() const;
        bool getIsSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;

        void beSigned(Bureaucrat const &bureaucrat);
        void execute(Bureaucrat const & executor) const;

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
        class FormNotSignedException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };

    protected:
        virtual void executeAction() const = 0;

};

std::ostream &operator<<(std::ostream &out, AForm const &form);

#endif