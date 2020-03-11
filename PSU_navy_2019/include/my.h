/*
** EPITECH PROJECT, 2019
** my
** File description:
** my.h
*/

#ifndef MY
#define MY

int my_getnbr(char *str);
void help(void);
int error(int ac, char **av);
int poweri(int a, int b);
int posboat(char *buffer, int a, int i);
int check_file(char *buffer);
int my_pos(char *file);
int my_pos(char *file);
int error(int ac, char **av);
int connection(int pid);
int get_coord(char *buffer, char **map, int a, int num_or_let);
int up_map(char **map, char line, int a, int b);
int error_pos(char **map, char *buffer, int a, char line);
int make_map(char **map, char *file);
char **map_malloc(char **map);
int my_strcompare(char *str, char *ref);
int my_putnbr(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
int create_map(char *file, char **map);

#endif
