/*
** THEO MARINGER, 2021
** array_lib
** File description:
** fill_char_2d_array
*/

void fill_char_2d_array(char **array, char c, int line, int col)
{
    for (int i = 0; i != line; i++)
        for (int j = 0; j != col; j++)
            array[i][j] = c;
}