# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 03:48:07 by eseferi           #+#    #+#              #
#    Updated: 2024/03/04 03:59:18 by eseferi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
COMP = c++
FLAGS = -Wall -Wextra -Werror -I$(INCL) -std=c++98
SRC = main.cpp
OBJ = main.o
GREEN = \033[32m
RED = \033[31m
YELLOW = \033[33m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMP) $(FLAGS) $^ -o $@
	@echo "$(GREEN)Compiled$(RESET)"

$(OBJ): $(SRC)
	@$(COMP) $(FLAGS) -c $< -o $@

clean:
	@if [ -f $(OBJ) ]; then \
		rm -rf $(OBJ); \
		echo "$(RED)Output file cleaned$(RESET)"; \
	else \
		echo "$(YELLOW)No output file to clean$(RESET)"; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "$(RED)Executable file cleaned$(RESET)"; \
	else \
		echo "$(YELLOW)No executable file to clean$(RESET)"; \
	fi
	

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 03:48:07 by eseferi           #+#    #+#              #
#    Updated: 2024/03/04 03:59:18 by eseferi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
COMP = c++
FLAGS = -Wall -Wextra -Werror -I$(INCL) -std=c++98
SRC = main.cpp
OBJ = main.o
GREEN = \033[32m
RED = \033[31m
YELLOW = \033[33m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMP) $(FLAGS) $^ -o $@
	@echo "$(GREEN)Compiled$(RESET)"

$(OBJ): $(SRC)
	@$(COMP) $(FLAGS) -c $< -o $@

clean:
	@if [ -f $(OBJ) ]; then \
		rm -rf $(OBJ); \
		echo "$(RED)Output file cleaned$(RESET)"; \
	else \
		echo "$(YELLOW)No output file to clean$(RESET)"; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "$(RED)Executable file cleaned$(RESET)"; \
	else \
		echo "$(YELLOW)No executable file to clean$(RESET)"; \
	fi
	

re: fclean all

.PHONY: all clean fclean re
