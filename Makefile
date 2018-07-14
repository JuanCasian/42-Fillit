# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syamada <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/14 15:53:25 by syamada           #+#    #+#              #
#    Updated: 2018/07/14 15:58:56 by syamada          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

NAME	:= fillit
SRCS	:= main.c
OBJECTS	:= $(SRCS:.c=.o)

.PHONY: all
all: $(NAME)

$(NAME):
	$(CC) -c $(SRCS) -I.
	$(CC) -o $(NAME) $(OBJECTS) -L. -lft

.PHONY: clean
clean:
	rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

