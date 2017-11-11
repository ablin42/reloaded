SRCS = "srcs/*.c"
HEADERS = "includes/"
NAME = "libft.a"


all:
	gcc -c -Wall -Werror -Wextra $(SRCS)"*.c"
	ar rc $(NAME)*.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
