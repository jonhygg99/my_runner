/*
** EPITECH PROJECT, 2019
** background_set
** File description:
** display_background
*/

#include "../csfml.h"

void background_texture_sprite(ts_t back[6])
{
    back[0].texture = sfTexture_createFromFile(BACK, NULL);
    back[1].texture = sfTexture_createFromFile(BACK, NULL);
    back[2].texture = sfTexture_createFromFile(MID_BACKGROUND, NULL);
    back[3].texture = sfTexture_createFromFile(MID_BACKGROUND, NULL);
    back[4].texture = sfTexture_createFromFile(GROUND, NULL);
    back[5].texture = sfTexture_createFromFile(GROUND, NULL);
    back[0].sprite = sfSprite_create();
    back[1].sprite = sfSprite_create();
    back[2].sprite = sfSprite_create();
    back[3].sprite = sfSprite_create();
    back[4].sprite = sfSprite_create();
    back[5].sprite = sfSprite_create();
}

void background_setTexture(ts_t back[6])
{
    sfSprite_setTexture(back[0].sprite, back[0].texture, 0);
    sfSprite_setTexture(back[1].sprite, back[1].texture, 0);
    sfSprite_setTexture(back[2].sprite, back[2].texture, 0);
    sfSprite_setTexture(back[3].sprite, back[3].texture, 0);
    sfSprite_setTexture(back[4].sprite, back[4].texture, 0);
    sfSprite_setTexture(back[5].sprite, back[5].texture, 0);
}

void background_position(ts_t back[6])
{
    sfVector2f beg = {0, 0};
    sfVector2f end = {1024, 0};
    sfVector2f beg1 = {0, 90};
    sfVector2f end1 = {1024, 90};
    sfVector2f beg2 = {0, 526};
    sfVector2f end2 = {1024, 526};

    sfSprite_setPosition(back[0].sprite, beg);
    sfSprite_setPosition(back[1].sprite, end);
    sfSprite_setPosition(back[2].sprite, beg1);
    sfSprite_setPosition(back[3].sprite, end1);
    sfSprite_setPosition(back[4].sprite, beg2);
    sfSprite_setPosition(back[5].sprite, end2);
}

void display_backgrounds(ts_t back[6])
{
    background_texture_sprite(back);
    background_setTexture(back);
    background_position(back);
}
