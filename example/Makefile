##
## THEO MARINGER, 2021
## array_lib
## File description:
## Makefile
##

SRC	=	example.c

OBJ	=	$(SRC:.c=.o)

NAME	=	example


all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L../ -l2darray -Iinclude -Wextra -Wall -Werror -g

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
