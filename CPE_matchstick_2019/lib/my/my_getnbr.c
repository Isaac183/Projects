/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** my_getnbr.c
*/

#include "my.h"

int my_getnbr(char *str)
{
	int i = 0;
	int ret = 0;

	if (str[0] == '-')
		i++;

	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
		ret = ret * 10;
		ret = ret + str[i] - '0';
		i++;
	}
	if (str[0] == '-')
		ret = ret * -1;

	return (ret);
}