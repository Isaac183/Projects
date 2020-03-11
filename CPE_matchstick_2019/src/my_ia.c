/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** my_ia.c
*/
#include "my.h"

int check_lines(int *str, int lines)
{
	if (str[lines - 1] != 0)
		return (0);
	return (1);
}

int check_sticks(int *str, int lines, int sticks)
{
	if (str[lines - 1] >= sticks)
		return (0);
	return (1);
}

int change_ia_str(int *str, int lines_nb, int nb, int size)
{
	if (str[lines_nb - 1] != 0 && lines_nb != 0) {
		str[lines_nb - 1] = str[lines_nb - 1] - nb;
	}
	my_putstr("\nAI's turn...\n");
	my_putstr("AI removed ");
	my_put_nbr(nb);
	my_putstr(" match(es) from line ");
	my_put_nbr(lines_nb);
	my_putchar('\n');
	return (str);
}

int *my_ia(int *str, int matches, int lines_nb)
{
	int lines = rand() % lines_nb + 1;
	int sticks = rand() % matches + 1;

	while (check_lines(str, lines) != 0)
		lines = rand() % lines_nb + 1;

	while (check_sticks(str, lines, sticks) != 0)
		sticks = rand() % matches + 1;

	str = change_ia_str(str, lines, sticks, lines_nb);
	print_map(lines_nb, str);
	return (str);
}


