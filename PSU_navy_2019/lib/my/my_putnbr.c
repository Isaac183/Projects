/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** 
*/

#include "my.h"

int my_putnbr(int nb)
{
    int i = 1;

    if (nb < 0) {
        my_putchar ('-');
        nb *= -1;
    }
    while ((nb / i) >= 10)
        i = i * 10;
    while (i > 0) {
        my_putchar((nb / i) % 10 + 48);
        i = i / 10;
    }
}
