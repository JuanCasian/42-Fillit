# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syamada <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/14 15:53:25 by syamada           #+#    #+#              #
#    Updated: 2018/07/14 21:32:24 by syamada          ###   ########.fr        #
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
OBJECTS	:= $(patsubst %.c, %.o, $(SRCS))
# I could have written like this: $(SRCS:.c=.o)
# this function(patsubst) replaces first parameter with second parameter from input on third paramter

.PHONY: all
all: $(NAME)

# $< is the first item in the dependencies list
# $@ is left side of the :
# $^ is right side of the :
# % is the same with wildcard
#this rule says .o files have dependencies on .c files which means this rule will be exected before whenever object files is used.
%.o: $(addprefix $(SRCSDIR)/,%.c)
	$(CC) -c $(CFLAGS) $< -I$(INCSDIR) -o $@

$(NAME): $(OBJECTS)
	$(CC) -o $@ $^ -L$(LIBSDIR) -lft

.PHONY: clean
clean:
	rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

.PHONY: norm
norm: $(SRCS) $(HEADERS)
	norminette $^
