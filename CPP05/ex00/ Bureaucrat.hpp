/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Bureaucrat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:42:01 by gafreire          #+#    #+#             */
/*   Updated: 2026/03/02 18:36:09 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <exception>

class  Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        // constructor default
        Bureaucrat(void);
        // assignment operator
        Bureaucrat(const Bureaucrat &cpy);
        // operator overload
        Bureaucrat &operator=(const Bureaucrat &cpy);
        // destructor
        ~Bureaucrat();
        std::string getName() const;      
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

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