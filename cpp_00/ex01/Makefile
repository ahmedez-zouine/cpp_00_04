
SRC = main.cpp contact.cpp phonebook.cpp

OBJ = $(SRC:.cpp=.o)

NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)	

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all