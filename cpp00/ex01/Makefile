CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook
RM = rm -rf

SRC = Contact.cpp Phonebook.cpp Main.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Phonebook.cpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean