A library for C development.

#Description
2d-array-lib is a brand new lib to help you to use the 2d arrays in C.

#Functions

Malloc char / int 2d array:
```C
- char **alloc_char_2d_array(int line, int col);
- int **alloc_int_2d_array(int line, int col);
```

Copy char / int 2d array into other char / int 2d array:
```C
- void copy_char_2d_array(char **src, char **dest, int line, int col);
- void copy_int_2d_array(int **src, int **dest, int line, int col);
```

Display char / int 2d array:
```C
- void display_char_2d_array(char **array, int line, int col);
- void display_int_2d_array(int **array, int line, int col);
```

Fill char / int 2d array with char:
```C
- void fill_char_2d_array(char **array, char c, int line, int col);
- void fill_int_2d_array(int **array, char c, int line, int col);
```

Free char / int 2d array:
```C
- void free_char_2d_array(char **array, int line, int col);
- void free_int_2d_array(int **array, int line, int col);
```