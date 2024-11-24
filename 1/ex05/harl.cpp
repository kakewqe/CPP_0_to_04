/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:03:21 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:03:24 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(void){};
Harl::~Harl(void){};


void Harl::_debug(void) const 
{
    std::cout << "!!! [DEBUG] I love having extra bacon for my burger! !!!" << std::endl;
}

void Harl::_info(void) const
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money." << std::endl;
}


void Harl::_warning(void) const
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::_error(void) const
{
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
    void (Harl::*ptr_tab_func[] )(void) const = {
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
            return;
        }
        i++;
    }

    (this->*ptr_tab_func[3])();
    return;

}
