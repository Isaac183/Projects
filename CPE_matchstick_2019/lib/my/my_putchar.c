/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** my_putchar.c
*/

#include "my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}