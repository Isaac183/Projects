/*
** EPITECH PROJECT, 2019
** powint
** File description:
** pow ho return an int
*/

int poweri(int a, int b)
{
    int c = a;

    if (b == 0)
        return (1);
    for (b; b - 1 > 0; b--)
        c *= c;
    return (c);
}
