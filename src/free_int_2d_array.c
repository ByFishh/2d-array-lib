/*
** THEO MARINGER, 2021
** array_lib
** File description:
** free_int_2d_array
*/

#include <stdlib.h>

void free_int_2d_array(int **array, int line, int col)
{
    for (int i = 0; i != line; i++)
        free(array[i]);
    free(array);
}