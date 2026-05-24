NAME = real_test

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = main.c \
       ft_isalnum/ft_isalnum_launcher.c \
       ft_isalnum/KO_test00.c \
       ft_isalnum/OK_test00.c \
       ft_isalpha/ft_isalpha_launcher.c \
       ft_isalpha/KO_test01.c \
       ft_isalpha/OK_test01.c \
       ft_isdigit/ft_isdigit_launcher.c \
       ft_isdigit/KO_test02.c \
       ft_isdigit/OK_test02.c \
       ft_isprint/ft_isprint_launcher.c \
       ft_isprint/KO_test03.c \
       ft_isprint/OK_test03.c \
       ft_strlen/ft_strlen_launcher.c \
       ft_strlen/OK_test05.c \
       ft_strlen/OK_test06.c \
       ft_strlen/OK_test07.c \
       ft_strlen/OK_test08.c \
       real_func/ft_isalnum.c \
       real_func/ft_isalpha.c \
       real_func/ft_isdigit.c \
       real_func/ft_isprint.c \
       real_func/ft_strlen.c \
#        real_func/ft_putstr.c \

OBJS = $(SRCS:.c=.o)

LIB = ../libunit.a

all: $(NAME)

$(NAME): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB):
	$(MAKE) -C .. all

test: $(NAME)
	./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
