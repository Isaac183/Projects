/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** main.c
*/

#include "my.h"

int game(int lines_nb, int matches)
{
	int lines;
	int *str = map(lines_nb);
	int nb;
	int win = 0;

	print_map(lines_nb, map(lines_nb));
	my_putstr("\nYour turn:\n");
	while (victory(str, lines_nb) != 0) {
		lines = get_lines_nb(lines_nb);
		if (lines == 0)
			return (0);
		my_putstr("Matches: ");
		nb = get_nb_matches(matches, lines, str);
		if (nb == -2)
			return (0);
		if (nb != -1) {;
			str = change_str(str, lines, nb, lines_nb);
			print_map(lines_nb, str);
			if (victory(str, lines_nb) == 0)
				return (2);
			str = my_ia(str, matches, lines_nb);
			if (victory(str, lines_nb) == 0)
				return (1);
		}
		if (nb != -1)
			my_putstr("\nYour turn:\n");
	}
	return (0);
}

int main(int ac, char **av)
{
	int lines_nb;
	int matches;
	int res;

	if (ac != 3)
		return (84);
	lines_nb = my_getnbr(av[1]);
	matches = my_getnbr(av[2]);
	if (lines_nb > 1 && lines_nb < 100 && matches > 0)
		res = game(lines_nb, matches);
	else
		return (84);
	if (res == 2) {
		my_putstr("You lost, too bad...\n");
		return (2);
	} else if (res == 1) {
		my_putstr("I lost... snif... but I'll get you next time!!\n");
		return (1);
	} else
		return (0);
}
