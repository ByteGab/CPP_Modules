/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:37:18 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/11 18:58:10 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (1);
    }
    Harl harl;
    harl.complain(argv[1]);
    
    return (0);
}