NAME = libft.a
SRC = {ft_putchar,ft_strcmp,ft_swap,ft_putstr,ft_strlen}.c

OBJ = {ft_putchar,ft_strcmp,ft_swap,ft_putstr,ft_strlen}.o

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c srcs/$(SRC) -I includes/
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all
