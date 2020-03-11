/*
** EPITECH PROJECT, 2020
** help file
** File description:
** for navy
*/

#include <unistd.h>

void help(void)
{
    write(1, "USAGE\n    ./navy [first_player_pid] navy_positions\n", 58);
    write(1, "DESCRIPTION\n    first_player_pid:  only for the 2nd ", 50);
    write(1, "player.  pid of the first player.\n    navy_positions: ", 53);
    write(1, " file representing the position of the ships.\n", 46);
}
