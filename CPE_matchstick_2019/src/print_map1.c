/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** print_map1.c
*/

#include "my.h"
#include <stdlib.h>

int count(int lines_nb)
{
	int x = 0;
	int ret = 0;

	for (int i = 0; i < lines_nb; i++) {
		ret = 1 + x;
		x +=2;
	}
	return (ret);
}

int *map(int lines_nb)
{
	int *map = malloc(sizeof(int) * lines_nb);
	int x = 0;

	for (int i = 0; i < lines_nb; i++) {
		map[i] = 1 + x;
		x +=2;
	}
	return (map);
}
