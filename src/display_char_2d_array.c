/*
** THEO MARINGER, 2021
** array_lib
** File description:
** display_char_2d_array
*/

#include <stdio.h>

void display_char_2d_array(char **array, int line, int col)
{
    for (int i = 0; i != line; i++) {
        printf("%s\n", array[i]);
    }
}