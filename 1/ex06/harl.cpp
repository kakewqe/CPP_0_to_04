/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:03:52 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:03:55 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(void){};
Harl::~Harl(void){};


void Harl::_debug(void) const 
{
    std::cout << "[DEBUG] LV0." << std::endl;
}

void Harl::_info(void) const
{
    std::cout << "[INFO] LV1." << std::endl;
}


void Harl::_warning(void) const
{
    std::cout << "[WARNING] LV2." << std::endl;
}

void Harl::_error(void) const
{
    std::cout << "[ERROR] LV3." << std::endl;
}


void Harl::complain(std::string level)
{
    void (Harl::*ptr_tab_func[] )(void) const = 
    {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error,
    };

    std::string Correspaonding[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR" 
    };

    int i = 0;
    while (i < 4)
    {
        if(Correspaonding[i] == level)
        {
            (this->*ptr_tab_func[i])();
            i++;
            for(int j = i; j < 4; j++)
                (this->*ptr_tab_func[j])();
            return;
        }
        i++;
    }
    (this->*ptr_tab_func[3])();
    return;

}
