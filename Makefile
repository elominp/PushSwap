NAME	= push_swap

CC	= gcc

CFLAGS	= -Wall -Wextra -pedantic -I./include -g

RM	= rm -rf

SRCS	= src/parsing.c \
	  src/push_fct_1.c \
	  src/push_fct_2.c \
	  src/push_fct_3.c \
	  src/pushswap.c \
	  src/sort.c \
	  src/get_option.c \
	  src/is_option.c \
	  src/my_parse.c \
	  src/my_printf.c \
	  src/my_put.c \
	  src/my_putblank.c \
	  src/my_putint.c \
	  src/my_putptr.c \
	  src/my_uppercase.c \
	  src/worknb.c \
	  src/my_putchar.c \
	  src/my_putnbr_base.c \
	  src/my_putstr.c \
	  src/my_strlen.c \
	  src/my_strdup.c \
	  src/ps_option.c \
	  src/my_atoi.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
