##
## THEO MARINGER, 2021
## array_lib
## File description:
## Makefile
##

SRC =	src/alloc_char_2d_array.c			\
		src/alloc_int_2d_array.c			\
		src/copy_char_2d_array.c			\
		src/copy_int_2d_array.c				\
		src/display_char_2d_array.c			\
		src/display_int_2d_array.c			\
		src/fill_char_2d_array.c			\
		src/fill_int_2d_array.c				\
		src/free_char_2d_array.c			\
		src/free_int_2d_array.c

OBJ = 	$(SRC:.c=.o)

NAME = 	lib2darray.a

all:
	gcc -c $(SRC)
	ar rc $(NAME) *.o

clean:
	rm -f $(OBJ)
	rm -f *.o
	find . \( -name \*# -o -name \#* -o -name \*~ \) -exec rm {} +

fclean: clean
	rm -f $(NAME)

re:	fclean all
