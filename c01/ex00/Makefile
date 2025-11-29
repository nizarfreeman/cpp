C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = newZombie.cpp randomChump.cpp main.cpp Zombie.cpp
HEADER = Zombie.hpp
OBJ = $(SRC:.cpp=.o)
NAME = BraiiiiiiinnnzzzZ

all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re