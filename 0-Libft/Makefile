NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

#TODO: modify wildcard
#TODO: modify bonus
SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

test:
	$(CC) $(CFLAGS) -o libft.a $(SRCS)
	./libft.a

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all