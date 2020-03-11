/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** my_putstr.c
*/

#include "my.h"

int my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}