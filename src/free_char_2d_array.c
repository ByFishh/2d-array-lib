/*
** THEO MARINGER, 2021
** array_lib
** File description:
** free_char_2d_array
*/

#include <stdlib.h>

void free_char_2d_array(char **array, int line, int col)
{
    for (int i = 0; i != line + 1; i++)
        free(array[i]);
    free(array);
}