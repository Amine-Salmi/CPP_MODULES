NAME = ClapTrap
HEADER = ClapTrap.hpp
HEADER2 = ScavTrap.hpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
RM = rm -rf

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER) $(HEADER2)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean
