NAME = a.out

SRC = main.c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strcpy.c ft_putnbr.c ft_strdup.c ft_strncpy.c ft_strcat.c ft_strlen.c ft_strncat.c ft_atoi.c ft_memalloc.c ft_memdel.c


all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
