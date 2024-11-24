SRC = main.cpp\
	harl.cpp\
	
CC = c++
NAME = Programe

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