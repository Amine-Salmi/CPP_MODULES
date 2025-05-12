NAME = prog
HEADER = AMateria.hpp Ice.hpp ICharacter.hpp Character.hpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
RM = rm -rf

SRC = main.cpp AMateria.cpp Ice.cpp Character.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean