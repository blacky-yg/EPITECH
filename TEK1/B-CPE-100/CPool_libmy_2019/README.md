# CPool_libmy_2019

## DESCRIPTION
Some C-coded functions for manipulating strings and numbers

## How to Build
```
$ make
```
This command will create a library `libmy.a`. You can include it in your project and use different functions listed below

## To Use it for your Project
```
$ gcc -o [binary_name] libmy.a [src_files] 
```

## List of Functions
| Function      | Description   |
| ------------- |:-------------:|
| void my_putchar(char c); | write one character on the standard output. |
| void my_isneg(int nb); | displays either N if nb is negative, P, if positive or null. |
| int my_put_nbr(int nb); | displays the number given as a parameter. |
| void my_swap(int *a, int *b); | swaps the content of two integers. |
| void my_putstr(char const *str); | displays, one-by-one, the characters of a string. |
| int my_strlen(char const *str); | counts and returns the number of characters found in the string. |
| int my_getnbr(char const *str); | returns a number, sent to the function as a string. |
| void my_sort_int_array(int *array, int size); | sorts an integer array in ascending order. |
| int my_compute_power_rec(int nb, int power); | returns the factorial of the number given as a parameter. |
| int my_compute_square_root(int nb); | returns the square root (if it is a whole number). |
| int my_is_prime(int nb); | returns 1 if the number is prime and 0 if not. |
| char *my_strcpy(char *dest, char const *src); | copies a string into another. |
| char *my_strncpy(char *dest, char const *src, int nb); | copies n characters from a string into another. |
| char *my_revstr(char *str); | reverses a string. | reverses a string. |
| char *my_strstr(char *str, char const *to_find); | finds the first occurrence of the substring needle in the string haystack. |
| int my_strcmp(char const *s1, char const *s2); | compares two strings character by character. |
| int my_strncmp(char const *s1, char const *s2, int nb); | compares at most the first n bytes of str1 and str2. |
| char *my_strupcase(char *str); | puts every letter of every word in it in uppercase. |
| char *my_strlowcase(char *str); | puts every letter of every word in it in lowercase. |
| int my_str_isalpha(char const *str); | returns 1 if the string passed as parameter only contains alphabetical characters and 0 if the string contains another type of character. |
| int my_str_isnum(char const *str); | returns 1 if the string passed as parameter only contains digits and 0 otherwise. |
| int my_str_islower(char const *str); | returns 1 if the string passed as parameter only contains lowercase alphabetical characters and 0 otherwise. |
| int my_str_isupper(char const *str); | returns 1 if the string passed as parameter only contains uppercase alphabetical characters and 0 otherwise. |
| int my_str_isprintable(char const *str); | returns 1 if the string passed as parameter only contains printable characters and 0 otherwise. |
| char *my_strcat(char *dest, char const *src); | concatenates two strings. |
| char *my_strncat(char *dest, char const *src, int nb); | concatenates n characters of the src string to the end of the dest string. |
| void my_put_non_printable(char *str); | converts and displays a decimal number into a number in a given base. |
| int my_putnbr_base(int nb, char *base); | converts and displays a decimal number into a number in a given base. |
| char *my_strdup(char const *src); | allocates memory and copies the string given as argument in it. |
| char **my_str_to_word_array(char const *str); | splits a string into words. |