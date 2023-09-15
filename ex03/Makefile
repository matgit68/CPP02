# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamat <mamat@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 22:27:24 by mamat             #+#    #+#              #
#    Updated: 2023/09/15 16:39:25 by mamat            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


BOLD	:= \033[1m
BLACK	:= \033[30;1m
RED		:= \033[31;1m
GREEN	:= \033[32;1m
YELLOW	:= \033[33;1m
BLUE	:= \033[34;1m
MAGENTA	:= \033[35;1m
CYAN	:= \033[36;1m
WHITE	:= \033[37;1m
RESET	:= \033[0m

NAME := ex03

CC := c++
CFLAGS := -Wall -Wextra -Werror -g
SANITIZE := -fsanitize=leak

SRC :=	bsp.cpp\
		Fixed.cpp\
		Point.cpp\
		main.cpp\

OBJ := $(SRC:.cpp=.o)

all: $(NAME)

.c.o:
	@printf '$(GREEN)Compiling: $(RESET)$<\n'
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $(<:.c=.o) 

$(NAME): $(OBJ)
	@$(CC) -std=c++98 $(CFLAGS) $(OBJ) -o $(NAME) $(SANITIZE)
	@printf '$(RED)- $(NAME) done -$(RESET)\n'

clean:
	@printf '$(YELLOW)Cleaning $(NAME) $(RESET)\n'
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)