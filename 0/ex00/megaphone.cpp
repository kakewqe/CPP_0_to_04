/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:58:26 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/04 14:58:31 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cstdio>
#include <iostream>

int	main(int argc, char **argv)
{
	int i = 1;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
	else
	{
		while (argv[i])
		{
			int y = 0;
			while (argv[i][y] != '\0')
			{
				if (islower(argv[i][y]))
					argv[i][y] = toupper(argv[i][y]);
				std::cout << argv[i][y];
				y++;
			}
			i++;
		}
	}
	return (0);
}