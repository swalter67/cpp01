# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swalter <swalter@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:13:32 by swalter           #+#    #+#              #
#    Updated: 2022/10/30 10:40:28 by swalter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= sedloser

SRCS	= main.cpp \
		cppreolace.cpp




OBJ		= $(SRCS :.cpp=.o)
CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS) $(OBJ) 
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)
%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

clean:
		rm -rf $(OBJS)
fclean: clean
		rm -rf $(NAME)
re: fclean all





