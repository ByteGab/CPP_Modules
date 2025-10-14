/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-02 09:52:53 by gafreire          #+#    #+#             */
/*   Updated: 2025-10-02 09:52:53 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)std::toupper(argv[i][j]);
                j++;
            }            
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}