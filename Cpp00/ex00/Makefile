# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 15:46:03 by segfault          #+#    #+#              #
#    Updated: 2024/03/02 19:15:10 by eseferi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Megaphone.cpp
GREEN = \033[32m
RED = \033[31m
YELLOW = \033[33m
RESET = \033[0m

all: $(NAME)

$(NAME): $(SRC)
	@if [ ! -e $@ ] || [ $^ -nt $@ ]; then $(CPP) $(FLAGS) $^ -o $@; \
		if [ $$? -eq 0 ]; \
			then echo "$(GREEN)Compiled$(RESET)"; \
		else \
			echo "$(RED)Error$(RESET)"; \
		fi; \
	fi

clean:
	@if [ -e $(NAME) ]; \
		then rm -f $(NAME); echo "$(RED)Cleaned$(RESET)"; \
	else \
		echo "$(YELLOW)Nothing to clean$(RESET)"; \
	fi

fclean: clean

re: fclean all

.PHONY: all clean fclean re