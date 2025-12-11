/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:05:56 by gafreire          #+#    #+#             */
/*   Updated: 2025/12/11 18:15:39 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain(std::string level);
    Harl();
    ~Harl();
};
