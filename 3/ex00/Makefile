# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 21:34:20 by zachamou          #+#    #+#              #
#    Updated: 2024/11/10 21:34:23 by zachamou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = \
		main.cpp\
		ClapTrap.cpp\
		ClapTrap_build.cpp


CC = c++
NAME = Clap

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
