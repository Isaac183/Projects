/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** win.c
*/

#include "my.h"

int victory(int *str, int size)
{
	for (int i = 0; i < size; i++)
		if (str[i] != 0)
			return (1);
	return (0);
}
