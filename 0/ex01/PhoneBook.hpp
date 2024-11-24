/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:00:08 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/04 15:00:10 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string.h>

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    add(std::string name_contact, std::string lastname, std::string nickname, std::string number, std::string darksecret);
        void    init_contact(std::string name_contact, std::string lastname, std::string nickname, std::string number, std::string darksecret, int i);
        void    search();
        void    find_contact();


    private:
    
		int		_index_contact;
        int     _intex_remplace;
        Contact	    _contact[8];
};

std::string format_string(const std::string& str);

#endif