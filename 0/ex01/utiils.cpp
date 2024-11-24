/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiils.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:00:17 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/04 15:00:19 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string format_string(const std::string& str) 
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
     else
        return str;
}
