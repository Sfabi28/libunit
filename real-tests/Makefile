NAME = real_test

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = main.c \
       ft_isalnum/ft_isalnum_launcher.c \
       ft_isalnum/ko_test00.c \
       ft_isalnum/ok_test00.c \
       ft_isalpha/ft_isalpha_launcher.c \
       ft_isalpha/ko_test01.c \
       ft_isalpha/ok_test01.c \
       ft_isdigit/ft_isdigit_launcher.c \
       ft_isdigit/ko_test02.c \
       ft_isdigit/ok_test02.c \
       ft_isprint/ft_isprint_launcher.c \
       ft_isprint/ko_test03.c \
       ft_isprint/ok_test03.c \
       ft_strlen/ft_strlen_launcher.c \
       ft_strlen/ok_test05.c \
       ft_strlen/ok_test06.c \
       ft_strlen/ok_test07.c \
       ft_strlen/ok_test08.c \
       ft_putstr/ft_putstr_launcher.c \
       ft_putstr/ok_test04.c \
       ft_putstr/ok_test09.c \
       ft_putstr/ok_test10.c \
       real_func/ft_isalnum.c \
       real_func/ft_isalpha.c \
       real_func/ft_isdigit.c \
       real_func/ft_isprint.c \
       real_func/ft_strlen.c \
       real_func/ft_putstr.c \

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
	rm -f $(NAME) *.log

re: fclean all

.PHONY: all clean fclean re test
