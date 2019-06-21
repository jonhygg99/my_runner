/*
** EPITECH PROJECT, 2019
** pause
** File description:
** pause
*/

#include "csfml.h"

void pause_game(sfRenderWindow *window)
{
    sfEvent event2;

    while (sfRenderWindow_pollEvent(window, &event2) || 1) {
        if (event2.type == sfEvtKeyPressed && event2.key.code == sfKeyP)
            break;
    }
}
