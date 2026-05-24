NAME = libunit.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCS = framework/launchtest.c framework/loadtest.c framework/utils.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: all
	$(MAKE) -C tests test
	$(MAKE) -C real-tests test

val:
	$(MAKE) -C tests val
	$(MAKE) -C real-tests val

clean:
	find . -type f -name "*.o" -delete

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C tests fclean
	$(MAKE) -C real-tests fclean


re: fclean all

.PHONY: all test clean fclean re bonus

bonus:
	@echo "No bonus files."
