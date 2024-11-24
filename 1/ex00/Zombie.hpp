/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:00:06 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:00:09 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

class Zombie 
{
    
    std::string     _name;

    public:
        Zombie(const std::string name);
        ~Zombie();
        
        void            announce(void) const;
        void            set_name(std::string name);
        std::string     get_name(void) const;
};


Zombie *newZombie(std::string name);
void    put_announce(Zombie &put);
void    init_heap_zombie(void);
void    init_stack_zombie(void);
