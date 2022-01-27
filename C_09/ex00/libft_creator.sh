rm -rf libft.a
gcc -c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c
ar rc libft.a *.o
ranlib libft.a
find . -name "*.o" -type f -delete
