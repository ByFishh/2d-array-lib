/*
** THEO MARINGER, 2021
** array_lib
** File description:
** fill_int_2d_array
*/

void fill_int_2d_array(int **array, int c, int line, int col)
{
    for (int i = 0; i != line; i++)
        for (int j = 0; j != col; j++)
            array[i][j] = c;
}