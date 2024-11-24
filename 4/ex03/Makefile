# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 23:09:11 by zachamou          #+#    #+#              #
#    Updated: 2024/11/14 23:09:13 by zachamou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
Source/ACharacter.cpp \
Source/AMateria.cpp \
Source/Cure.cpp \
Source/Ice.cpp \
Source/MateriaSource.cpp

CC = c++
NAME = cpp_exo_3
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
