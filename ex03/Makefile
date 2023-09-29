# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdjemaa <mdjemaa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 22:27:24 by mamat             #+#    #+#              #
#    Updated: 2023/09/29 17:07:32 by mdjemaa          ###   ########.fr        #
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

CXX := c++
CPPFLAGS := -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address

SRC :=	bsp.cpp\
		Fixed.cpp\
		main.cpp\
		Point.cpp\

OBJ := $(SRC:.cpp=.o)

all: $(NAME)

#.c.o:
#	@printf '$(GREEN)Compiling: $(RESET)$<\n'
#	@$(CXX) $(CPPFLAGS) $(INCLUDES) -c $< -o $(<:.c=.o) 

$(NAME): $(OBJ)
	@$(CXX)  $(CPPFLAGS) -o $(NAME) $(OBJ)
	@printf '$(RED)- $(NAME) done -$(RESET)\n'

clean:
	@printf '$(YELLOW)Cleaning $(NAME) $(RESET)\n'
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)