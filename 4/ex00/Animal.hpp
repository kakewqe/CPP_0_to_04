/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:03:18 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/14 23:03:20 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdlib.h>

class Animal
{
  public:
	Animal();
	Animal(const Animal &o);
	Animal &operator=(const Animal &o);
	virtual ~Animal();
	virtual void makeSound() const;
	void setStr(std::string str);
	std::string getType() const;

  protected:
	std::string _type;
};