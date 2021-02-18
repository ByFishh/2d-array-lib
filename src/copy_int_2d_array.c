/*
** THEO MARINGER, 2021
** array_lib
** File description:
** copy_int_2d_array
*/

void copy_int_2d_array(int **src, int **dest, int line, int col)
{
    for (int i = 0; i != line; i++)
        for (int j = 0; j != col; j++)
            dest[i][j] = src[i][j];
}