# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenaoui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 11:38:48 by mbenaoui          #+#    #+#              #
#    Updated: 2022/10/31 11:38:50 by mbenaoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = MutantStack
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
CC = c++

SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp  MutantStack.hpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling..."

clean:
	@$(RM) $(OBJS)
	@echo "cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo "executable removed"

re: fclean all

