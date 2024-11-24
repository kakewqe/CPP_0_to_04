/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:00:53 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/09 19:02:37 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie 
{
    
    std::string     _name;

    public:
        Zombie( std::string name);
        Zombie();
        ~Zombie();
        
        void            announce(void) const;
        void            set_name(std::string name);
        std::string     get_name(void) const;
};


Zombie NewZombie(std::string name);
void    put_announce(Zombie &put);
void    init_heap_zombie(int N);
void    init_stack_zombie(void);
