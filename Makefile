NAME = a.out

SRC = main.c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strcpy.c ft_putnbr.c ft_strdup.c ft_strncpy.c ft_strcat.c ft_strlen.c ft_strncat.c ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_memalloc.c ft_strlcpy.c ft_calloc.c ft_memdel.c ft_strnew.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strcpy.o ft_putnbr.o ft_strdup.o ft_strncpy.o ft_strcat.o ft_strlen.o ft_strncat.o ft_atoi.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strncmp.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_strnstr.o ft_memalloc.o ft_strlcpy.o ft_calloc.o ft_memdel.o ft_strnew.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME)  $(SRC)
	gcc -c $(SRC)
	ar rcs libft.a $(OBJ)	
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f *.a

re: fclean all
