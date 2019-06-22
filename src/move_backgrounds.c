/*
** EPITECH PROJECT, 2018
** backgrounds
** File description:
** background  moves
*/

#include "../csfml.h"

void move_back(sfRenderWindow *window, ts_t back[6])
{
    sfVector2f beg = {0, 0};
    sfVector2f end = {1024, 0};
    sfVector2f vel = {-0.01, 0};

    sfRenderWindow_drawSprite(window, back[0].sprite, NULL);
    sfRenderWindow_drawSprite(window, back[1].sprite, NULL);
    sfSprite_move(back[0].sprite, vel);
    sfSprite_move(back[1].sprite, vel);
    if (sfSprite_getPosition(back[0].sprite).x < -1024) {
        sfSprite_setPosition(back[0].sprite, beg);
        sfSprite_setPosition(back[1].sprite, end);
    }
}

void move_mid(sfRenderWindow *window, ts_t back[6])
{
    sfVector2f beg = {0, 90};
    sfVector2f end = {1024, 90};
    sfVector2f vel = {-0.02, 0};

    sfRenderWindow_drawSprite(window, back[2].sprite, NULL);
    sfRenderWindow_drawSprite(window, back[3].sprite, NULL);
    sfSprite_move(back[2].sprite, vel);
    sfSprite_move(back[3].sprite, vel);
    if (sfSprite_getPosition(back[2].sprite).x < -1024) {
        sfSprite_setPosition(back[2].sprite, beg);
        sfSprite_setPosition(back[3].sprite, end);
    }
}

void move_front(sfRenderWindow *window, ts_t back[6])
{
    sfVector2f beg = {0, 526};
    sfVector2f end = {1024, 526};
    sfVector2f vel = {-1, 0};

    sfRenderWindow_drawSprite(window, back[4].sprite, NULL);
    sfRenderWindow_drawSprite(window, back[5].sprite, NULL);
    sfSprite_move(back[4].sprite, vel);
    sfSprite_move(back[5].sprite, vel);
    if (sfSprite_getPosition(back[4].sprite).x < -1024) {
        sfSprite_setPosition(back[4].sprite, beg);
        sfSprite_setPosition(back[5].sprite, end);
    }
}

int move_background(sfRenderWindow *window, ts_t back[6])
{
    move_back(window, back);
    move_mid(window, back);
    move_front(window, back);
    return (1);
}
