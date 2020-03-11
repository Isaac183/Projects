/*
** EPITECH PROJECT, 2020
** main
** File description:
** for navy
*/

#include "my.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    char **map = map_malloc(map);

    if (map == NULL)
        return (84);
    else if (error(ac, av) == 84)
        return (84);
    if (ac == 2) {
        if (create_map(av[1], map) == 84)
            return (84);
    }
    else if (create_map(av[2], map) == 84)
        return (84);
    return (0);
}
