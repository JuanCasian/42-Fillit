# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syamada <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/14 15:53:25 by syamada           #+#    #+#              #
#    Updated: 2018/07/14 21:08:55 by jcasian          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

NAME	:= fillit
SRCSDIR	:= srcs
INCSDIR	:= includes
LIBSDIR	:= libs
SRCS	:= main.c fillit.c ft_remalloc.c read_input.c
HEADERS	:= $(wildcard $(INCSDIR)/*.h)
OBJECTS	:= $(SRCS:.c=.o)

.PHONY: all
all: $(NAME)

$(NAME):
	$(CC) -c $(addprefix $(SRCSDIR)/,$(SRCS)) -I$(INCSDIR)
	$(CC) -o $(NAME) $(OBJECTS) -L$(LIBSDIR) -lft

.PHONY: clean
clean:
	rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

