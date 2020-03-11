/*
** EPITECH PROJECT, 2020
** error file
** File description:
** for navy
*/

#include "my.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int posboat(char *buffer, int a, int i)
{
    if (buffer[a - 1] != ':' || buffer[a + 2] != ':')
        return (84);
    if (((buffer[a + 3] - buffer[a] != i) || (buffer[a + 4] - buffer[a + 1]
    != 0)) && ((buffer[a + 4] - buffer[a + 1] != i) || (buffer[a + 3] -
    buffer[a] != 0)))
        return (84);
    return (0);
}

int check_file(char *buffer)
{
    int a = 0;

    for (int i = '2'; i <= '5'; i++) {
        if (i != buffer[a])
            return (84);
        a += 8;
    }
    a = 2;
    for (int i = 1; i < 5; i++) {
        if (buffer[a - 1] != ':' || buffer[a + 2] != ':')
            return (84);
        if (posboat(buffer, a, i) == 84)
            return (84);
        a += 8;
    }
    return (0);
}

int my_pos(char *file)
{
    int fd = open(file, O_RDONLY);
    char buffer[32];

    if (fd == -1)
        return (84);
    if (!(read(fd, buffer, 32)) || buffer[30] == '\0') {
        close(fd);
        return (84);
    } else if (check_file(buffer) == 84) {
        close(fd);
        return (84);
    }
    close(fd);
    return (0);
}

int error(int ac, char **av)
{
    if (ac == 2) {
        if (my_strcompare(av[1], "-h") == 84) {
            if(my_pos(av[1]) == 84)
                return (84);
            connection(-1);
        } else
            help();
        return (0);
    } else if (ac == 3) {
        if(my_pos(av[2]) == 84)
            return (84);
        if (connection(my_getnbr(av[1])) == 84)
            return (84);
    } else
        return (84);
    return (0);
}

void free_error(char **map)
{
    for (int pos = 2; pos < 10; pos++)
        free(map[pos]);
    free(map);
}
