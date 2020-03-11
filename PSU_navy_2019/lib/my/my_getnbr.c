/*
** EPITECH PROJECT, 2019
** get nbr
** File description:
** get nbr function
*/

#include "my.h"

int my_more(char *str, int a)
{
    int res = 0;
    int i = 1;

    if(str[a + 1] >= '0' && str[a + 1] <= '9') {
        for (i = 1; str[a + i] >= '0' && str[a + i] <= '9'; i++);
        res += ((str[a] - '0') * poweri(10, i - 1));
        if (i >= 4 &&  i < 6)
            res /= poweri(10, (i - 3) + (i - 4));
    }
    else
        res += str[a] - '0';
    return (res);
}

int my_getnbr(char *str)
{
    int a = 0;
    int res = 0;

    for (a; str[a] != '\0' && str[a] != '.'; a++) {
        if (str[a] >= '0' && str[a] <= '9') {
            res += my_more(str, a);
        }
    }
    if (str[0] == '-')
        res *= -1;
    return (res);
}
