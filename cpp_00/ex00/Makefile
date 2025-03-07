SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)	
	
$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
