/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:02:02 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/06 23:36:15 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <iostream>
#include <string>


void my_remplace(const std::string& src, const std::string& s1, const std::string& s2)
{
    std::ofstream outfill("test.replace");
    if (!outfill.is_open()) 
    {
        std::cerr << "Failed to open the output file." << std::endl;
        return;
    }
    
    size_t pos = 0;
    size_t size_s1 = s1.length();
    //size_t size_s2 = s2.length();

    while (pos < src.length()) 
    {
        size_t found = src.find(s1, pos);
        std::cout << "pos = " << pos << std::endl;
        std::cout << "found =" << found << std::endl;
        if (found != std::string::npos) 
        {
            outfill << src.substr(pos, found - pos);
            outfill << s2;  
            pos = found + size_s1;  
        } 
        else 
        {
            outfill << src.substr(pos);
            break;
        }
    }
    
    outfill.close();
}
int main(int argc, char **argv)
{
    if (argc != 4) 
    {
 		  std::cout << "Invalid number of arguments" << std::endl;
		  return (1);
    }
    
    std::ifstream filename(argv[1]);
    std::string s1(argv[2]);;
    std::string s2(argv[3]);;

    if(filename.fail() || s1.empty() || s2.empty())
    {
        std::cerr << "Error in argument " << std::endl;
        return (1);
    }

    std::string src;
    std::string buff;
    while (std::getline(filename, buff))
        src += (buff + '\n');
    my_remplace(src, s1, s2);

    //std::cout << src;

    filename.close();
    
}


