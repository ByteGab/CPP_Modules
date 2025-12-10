/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:53:38 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/10 16:02:38 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main (int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Error arguments invalids" << std::endl;
        return (1);
    }
    return (0);
}