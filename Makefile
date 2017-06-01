NAME = libftprintf.a
CC = gcc
CFLAGS += -Wall -Wextra -Werror

LIBPATH = libft
LIBFT = $(LIBPATH)/libft.a
LIBINC = -I$(LIBPATH)
LIBLINK = -L$(LIBPATH) -lft

SRCS = $(wildcard *.c)

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBPATH)
	$(CC) $(CFLAGS) $(LIBLINK) -o $(NAME) $(OBJS) -fsanitize=address

%.o: %.c
	$(CC) $(CFLAGS) $(LIBINC) -c -o $@ $^

clean:
	-rm -f $(OBJS) $(LIBFT)
	make -C $(LIBPATH) clean

fclean: clean
	-rm -f $(NAME)
	make -C $(LIBPATH) fclean

re: fclean all

	.PHONY: clean fclean re all
