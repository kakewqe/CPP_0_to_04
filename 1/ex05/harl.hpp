/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:03:32 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:03:35 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Harl 
{
    private:
        void    _debug(void) const;
        void    _info(void) const;
        void    _warning(void) const;
        void    _error(void) const;
        
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
};