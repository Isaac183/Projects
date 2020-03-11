/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** get_next_line.h
*/
#ifndef READ_SIZE
#define READ_SIZE (5)

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

char *copy_str(char *str, char *tmp);
char *get_next_line(int);

#endif
