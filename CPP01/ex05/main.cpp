/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:05:36 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/11 18:26:27 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("ERROR");
    harl.complain("EY");
    harl.complain ("WARNING");
    harl.complain ("INFO");
    return (0);
}