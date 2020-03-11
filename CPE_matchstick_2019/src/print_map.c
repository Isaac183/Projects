/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** print_map.c
*/

#include "my.h"

void print_first_spaces(int *str, int i, int lines_nb)
{
	int lines = count(lines_nb);
	int stick = str[i];
	int nb = (lines - stick) / 2;

	for (int i = 0; i < nb;i++)
		my_putchar(' ');
}

void print_pipe(int nb)
{
	for (int i = 0; i < nb; i++)
		my_putchar('|');
}

void print_map(int lines_nb, int *str)
{
	for (int i = 0; i < count(lines_nb); i++)
		my_putchar('*');
	my_putstr("**\n");
	for (int i = 0; i < lines_nb; i++) {
		my_putchar('*');
		print_first_spaces(map(lines_nb), i, lines_nb);
		print_pipe(str[i]);
		print_last_spaces(str, i, lines_nb);
		my_putstr("*\n");
		}
	for (int i = 0; i < count(lines_nb); i++)
		my_putchar('*');
	my_putstr("**\n");
}

void print_last_spaces(int *str, int i, int lines_nb)
{
	int *barr = map(lines_nb);
	int lines = count(lines_nb);
	int nb = ((lines - barr[i]) / 2) + (barr[i] - str[i]);
	for (int i = 0; i < nb; i++)
		my_putchar(' ');
}
