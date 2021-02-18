/*
** THEO MARINGER, 2021
** array_lib
** File description:
** alloc_int_2d_array
*/

#include <stdio.h>
#include <stdlib.h>

int **alloc_int_2d_array(int line, int col)
{
    int **tmp = malloc(sizeof(int *) * (line + 1));
    
    for (int i = 0; i != line; i++)
        tmp[i] = malloc(sizeof(int) * col);

    tmp[line] = NULL;

    return tmp;
}