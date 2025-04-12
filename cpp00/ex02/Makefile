CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = GlobalBanksters
RM = rm -rf
LOGFILE = $(shell date "+%Y%m%d_%H%M%S").log

SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Account.hpp

GREEN  = \033[0;32m
RED    = \033[0;31m
RESET  = \033[0m

all : $(LOGFILE)

$(NAME) : $(OBJ) $(HEADER)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(LOGFILE): $(NAME)
	@./$(NAME) > $(LOGFILE)
	@$(RM) $(NAME)
	@echo "$(GREEN)File Created successfully!$(RESET)"

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)
	@echo "$(RED)clean...$(RESET)"

re : fclean all

.PHONY : clean