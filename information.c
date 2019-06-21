/*
** EPITECH PROJECT, 2018
** info
** File description:
** information
*/

#include "csfml.h"

void info(char *exe)
{
    my_putstr("Finite runner created with CSFML.\n\n");
    my_putstr("USAGE\n ");
    my_putstr(exe);
    my_putstr("\n\n\nOPTIONS\n");
    my_putstr(" -i\t\t    launch the game in infinity mode.\n");
    my_putstr(" -h\t\t    print the usafe and quit.\n\n");
    my_putstr("USER INTERACTIONS\n SPACE_KEY and KEY_UP\t  jump.\n");
    my_putstr(" KEY_P\t\t\t  pause and resume the game.\n");
}

void nothing(char *exe)
{
    my_putstr(exe);
    my_putstr(": bad arguments: 0 given but 1 is required\n");
    my_putstr("retry with -h\n");
}
