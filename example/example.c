/*
** THEO MARINGER, 2021
** array_lib
** File description:
** example
*/

#include "include/2d_array.h"

int main(void)
{
    char **map = alloc_char_2d_array(5, 5);     // Create 2d char array
    char **cpy = alloc_char_2d_array(5, 5);

    fill_char_2d_array(map, 'X', 5, 5);         // Fill 2d char array with X

    copy_char_2d_array(map, cpy, 5, 5);         // Copy map into cpy

    display_char_2d_array(map, 5, 5);           // Display 2d char array

    free_char_2d_array(map, 5, 5);              // Free 2d char array
    free_char_2d_array(cpy, 5, 5);

    return 0;
}