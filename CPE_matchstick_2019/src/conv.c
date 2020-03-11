/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** conv.c
*/

#include "my.h"

int *change_str(int *str, int lines_nb, int nb, int size)
{
	if (lines_nb == 0)
		my_putstr("Error: this line is out of range\n");
	if (str[lines_nb - 1] != 0 && lines_nb != 0) {
		str[lines_nb - 1] = str[lines_nb - 1] - nb;
		print_message(str, lines_nb, nb);
	}
	return (str);
}

void print_message(int *str, int lines_nb, int nb)
{
	my_putstr("Player removed ");
	my_put_nbr(nb);
	my_putstr(" match(es) from line ");
	my_put_nbr(lines_nb);
	my_putchar('\n');
}
