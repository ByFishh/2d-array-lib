/*
** THEO MARINGER, 2021
** array_lib
** File description:
** display_int_2d_array
*/

#include <stdio.h>

void display_int_2d_array(int **array, int line, int col)
{
    for (int i = 0; i != line; i++) {
        for (int j = 0; j != col; j++) {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
}