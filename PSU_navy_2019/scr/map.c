/*
** EPITECH PROJECT, 2020
** map file
** File description:
** for navy
*/

#include "my.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int get_coord(char *buffer, char **map, int a, int num_or_let)
{   
    if (num_or_let == 0) {
        num_or_let += 2;
        for (; num_or_let < 19; num_or_let += 2)
            if (map[0][num_or_let] == buffer[a])
                break;
        if (num_or_let == 18 && map[0][num_or_let] != buffer[a])
            return (84);
    } else {
        num_or_let++;
        for (; num_or_let < 10; num_or_let++)
            if (map[num_or_let][0] == buffer[a + 1])
                break;
        if (num_or_let == 9 && map[num_or_let][0] != buffer[a])
            return (84);
    }
    return (num_or_let);
}

int up_map(char **map, char line, int a, int b)
{
    if (map[a][b] != '.')
        return (84);
    else if (line > '5' || line < '2')
        return (84);
    else
        map[a][b] = line;
    return (0);
}

int error_pos(char **map, char *buffer, int a, char line)
{
    int letter = get_coord(buffer, map, a, 0);
    int number = get_coord(buffer, map, a, 1);

    if (letter == 84 || number == 84)
        return (84);
    else if ((buffer[a + 4] - '0' + 1) - number != 0) {
        for (; (buffer[a + 4] - '0' + 2) - number != 0; number++)
            if (up_map(map, line, number, letter) == 84)
                return (84);
    } else {
        for (; (buffer[a + 3] - 'A' + 2) - (letter / 2) != 0; letter += 2) {
            if (up_map(map, line, number, letter) == 84)
                return (84);
        }
    }
    return (0);
}

int make_map(char **map, char *file)
{
    char buffer[32];
    int fd = open(file, O_RDONLY);
    char boat = '2';

    read(fd, buffer, 32);
    for (int a = 2; a < 32; a += 8) {
        if (error_pos(map, buffer, a, boat) == 84)
            return (84);
        boat++;
    }
    return (0);
}

int create_map(char *file, char **map)
{
    map[0] = " |A B C D E F G H\n";
    map[1] = "-+---------------\n";
    for (int a = 2; a < 10; a++) {
        map[a][0] = ((a - 1) + '0');
        map[a][1] = '|';
        for (int i = 2; i < 18; i += 2) {
            map[a][i] = '.';
            map[a][i + 1] = ' ';
        }
        map[a][18] = '\n';
    }
    if (make_map(map, file) == 84)
        return (84);
    return (0);
}

char **map_malloc(char **map)
{
    map = malloc(sizeof(char *) * 10);
    if (map == NULL)
        return (NULL);
    for (int i = 2; i < 10; i++) {
        map[i] = malloc(sizeof(char) * 20);
        if (map[i] == NULL)
            return (NULL);
        else            
            for (int a = 0; a < 20; a++)
                map[i][a] = '\0';
    }
    return (map);
}
