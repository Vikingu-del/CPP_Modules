# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 15:46:03 by segfault          #+#    #+#              #
#    Updated: 2024/03/03 01:39:05 by eseferi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CPP = g++
INCL = inc
FLAGS = -Wall -Wextra -Werror -I$(INCL) -std=c++98
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:src/%.cpp=obj/%.o)
GREEN = \033[32m
RED = \033[31m
YELLOW = \033[33m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) $^ -o $@
	@echo "$(GREEN)Compiled$(RESET)"

obj/%.o: src/%.cpp
	@mkdir -p obj
	@$(CPP) $(FLAGS) -c $< -o $@

fclean: clean
	@if [ -f $(NAME) ]; then \
		rm -f $(NAME); \
		echo "$(RED)Executable file cleaned$(RESET)"; \
	else \
		echo "$(YELLOW)No executable file to clean$(RESET)"; \
	fi

clean:
	@if [ -d obj ]; then \
		rm -rf obj; \
		echo "$(RED)Object files cleaned$(RESET)"; \
	else \
		echo "$(YELLOW)No Object file to clean$(RESET)"; \
	fi
	
re: fclean all

.PHONY: all clean fclean re
