
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

SRCS = ft_printf.c ft_funcs.c ft_funcspt.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) 
		$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re