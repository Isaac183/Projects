/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** input.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int get_lines_nb(int lines_nb)
{
	int lines = 100;
	char *s;

	while (lines > lines_nb || lines == 0) {
		my_putstr("Line: ");
		s = get_next_line(0);
		if (s == NULL) {
			lines = 0;
			break;
		}
		if (s != NULL && check_str(s) == 0) {
			lines = my_getnbr(s);
			if (lines > lines_nb || lines == 0)
				my_putstr("Error: this line is out of range\n");
		}
		free(s);
	}
	return (lines);
}

int check_str(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < '0' || str[i] > '9') {
			my_putstr("Error: invalid input ");
			my_putstr("(positive number expected)\n");
			return (1);
		}
		i++;
	}
	return (0);
}

int get_nb_matches(int matches, int lines, int *str)
{
	int sticks;
	char *s;

	s = get_next_line(0);
	if (s == NULL)
		return (-2);
	if (s != NULL) {
		sticks = my_getnbr(s);
		if (check_str_matches(matches, lines, str, sticks) == -1)
			return (-1);
	}
	if (check_str(s) != 0)
		return (-1);
	return (sticks);
}

int check_str_matches(int matches, int lines, int *str, int sticks)
{
	if (sticks > matches) {
		msg_str_match(1, matches);
		return (-1);
	}
	if (sticks == 0) {
		msg_str_match(2, matches);
		return (-1);
	}
	if (sticks > str[lines - 1]) {
		msg_str_match(3, matches);
		return (-1);
	}
	return (0);
}

void msg_str_match(int i, int matches)
{
	if (i == 1) {
		my_putstr("Error: you cannot remove more than ");
		my_put_nbr(matches);
		my_putstr(" matches per turn\n");
	} else if (i == 2)
		my_putstr("Error: you have to remove at least one match\n");
	else
		my_putstr("Error: not enough matches on this line\n");
}
