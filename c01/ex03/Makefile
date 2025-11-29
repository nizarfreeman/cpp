C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp
OBJ = $(SRC:.cpp=.o)
NAME = Unnecessary_Violence

all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean