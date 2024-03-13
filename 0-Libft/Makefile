NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

#TODO: modify wildcard
#TODO: modify bonus
SRCS = $(wildcard *.c)

#BONUS = ft_lstnew.c \
#        ft_lstadd_front.c \
#        ft_lstsize.c \
#        ft_lstlast.c \
#        ft_lstadd_back.c \
#        ft_lstdelone.c \
#        ft_lstclear.c \
#        ft_lstiter.c \
#        ft_lstmap.c

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