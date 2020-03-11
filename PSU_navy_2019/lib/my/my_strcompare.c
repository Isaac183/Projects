/*
** EPITECH PROJECT, 2020
** strcomparator
** File description:
** my_strcompare
*/

int my_strcompare(char *str, char *ref)
{
    int i = 0;

    for (; str[i] && str[i]; i++)
        if (str[i] != '\n' && (ref[i] != str[i]))
            return (84);
    if (str[i] != '\0' || ref[i - 1] != '\0')
        return (84);
    return (0);
}
