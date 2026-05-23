# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/23 13:43:55 by elmondo           #+#    #+#              #
#    Updated: 2026/05/23 13:43:56 by elmondo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= tests

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.c \
		  memcpy/00_launcher.c \
		  memcpy/01_ok_test.c \
		  memcpy/02_ko_test.c \
		  memcpy/03_segv_test.c \
		  memcpy/04_bus_test.c \
		  strlen/00_launcher.c \
		  strlen/01_ok_test.c \
		  strlen/02_ko_test.c \
		  strlen/03_segfault_test.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
