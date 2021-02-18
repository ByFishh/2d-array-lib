/*
** THEO MARINGER, 2021
** array_lib
** File description:
** alloc_char_2d_array
*/

#include <stdio.h>
#include <stdlib.h>

char **alloc_char_2d_array(int line, int col)
{
    char **tmp = malloc(sizeof(char *) * (line + 1));
    
    for (int i = 0; i != line; i++) {
        tmp[i] = malloc(sizeof(char) * col + 1);
        tmp[i][col] = '\0';
    }
    tmp[line] = NULL;

    return tmp;
}