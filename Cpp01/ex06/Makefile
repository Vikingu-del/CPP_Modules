# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 21:39:14 by eseferi           #+#    #+#              #
#    Updated: 2024/03/04 22:55:13 by eseferi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
COMP = c++
FLAGS = -Wall -Wextra -Werror -I$(INCL) -std=c++98
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:src/%.cpp=obj/%.o)
INCL = inc
GREEN = \033[32m
RED = \033[31m
YELLOW = \033[33m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMP) $(FLAGS) $^ -o $@
	@echo "$(GREEN)Compiled$(RESET)"

obj/%.o: src/%.cpp
	@mkdir -p obj
	@$(COMP) $(FLAGS) -c $< -o $@

clean:
	@if [ -d obj ]; then \
		rm -rf obj; \
		echo "$(RED)Object files cleaned$(RESET)"; \
	else \
		echo "$(YELLOW)No Object file to clean$(RESET)"; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "$(RED)Executable file cleaned$(RESET)"; \
	else \
		echo "$(YELLOW)No executable file to clean$(RESET)"; \
	fi
	

re: fclean all

.PHONY: all clean fclean reyou