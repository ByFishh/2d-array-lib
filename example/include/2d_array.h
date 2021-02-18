/*
** THEO MARINGER, 2021
** 2d_array_lib
** File description:
** 2d_array
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef ARRAY_H_
#define ARRAY_H_

char **alloc_char_2d_array(int line, int col);
int **alloc_int_2d_array(int line, int col);
void copy_char_2d_array(char **src, char **dest, int line, int col);
void copy_int_2d_array(int **src, int **dest, int line, int col);
void display_char_2d_array(char **array, int line, int col);
void display_int_2d_array(int **array, int line, int col);
void fill_char_2d_array(char **array, char c, int line, int col);
void fill_int_2d_array(int **array, char c, int line, int col);
void free_char_2d_array(char **array, int line, int col);
void free_int_2d_array(int **array, int line, int col);

#endif
