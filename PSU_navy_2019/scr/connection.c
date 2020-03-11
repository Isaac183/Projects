/*
** EPITECH PROJECT, 2020
** connection file
** File description:
** fot navy
*/

#include "my.h"
#include <signal.h>
#include <unistd.h>

void connected(int pid)
{
    my_putstr("\n\nenemy connected\n");
    exit(0);
}

int connection(int pid)
{
    int process_id = 0;

    if (pid < 0) {
        process_id = getpid();
        my_putstr("my_pid: ");
        my_putnbr(process_id);
        my_putstr("\nwaiting for enemy connection. . .");
        signal(SIGUSR1, connected);
        while (1);
    } else {
        if (kill(pid, SIGUSR1) == -1)
            return (84);
        process_id = getpid();
        my_putstr("my_pid: ");
        my_putnbr(process_id);
        my_putstr("\nsuccessfully connected\n");
    }
    return (0);
}
