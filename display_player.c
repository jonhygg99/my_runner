/*
** EPITECH PROJECT, 2019
** player set
** File description:
** 
*/

#include "csfml.h"

void display_player(pl_t player[1])
{
    sfVector2f beg = {120, 400};
    sfVector2f size = {0.3, 0.3}; 

    player[0].pos.x = 120;
    player[0].pos.y = 400;
    player[0].texture = sfTexture_createFromFile("player/cats.png", NULL);
    player[0].sprite = sfSprite_create();
    sfSprite_setScale(player[0].sprite, size);
    sfSprite_setPosition(player[0].sprite, beg);
}
