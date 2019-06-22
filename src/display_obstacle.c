/*
** EPITECH PROJECT, 2019
** obstacle display
** File description:
** display_obstacle
*/

#include "../csfml.h"

void display_obstacle(obs_t obstacle[100])
{
    sfVector2f beg = {1026, 470};
    sfVector2f end = {-124, 470};
    sfVector2f size = {1.3, 1.3};

    obstacle[0].texture = sfTexture_createFromFile(OBSTACLE, NULL);
    obstacle[0].sprite = sfSprite_create();
    sfSprite_setTexture(obstacle[0].sprite, obstacle[0].texture, 0);
    sfSprite_setScale(obstacle[0].sprite, size);
    sfSprite_setPosition(obstacle[0].sprite, beg);
}

int position_obstacle2(obs_t obstacle[100], char *map)
{
    int i = 0;
    int j = 0;
    sfVector2f pos = {1026, 470};

    for (i = 0; map[i] != '\0'; i++) {
        if (map[i] == '1') {
            sfSprite_setPosition(obstacle[j].sprite, pos);
            pos.x += 100;
        } else
            pos.x += 100;
    }
}

int display_obstacle2(obs_t obstacle[100], int obsta, char *map)
{
    sfVector2f size = {1.3, 1.3};
    int i;
    int j = 0;

    for (i = 0; map[i] != '\0'; i++) {
        if (map[i] == '1') {
            obstacle[j].texture = sfTexture_createFromFile(OBSTACLE, NULL);
            obstacle[j].sprite = sfSprite_create();
            sfSprite_setTexture(obstacle[j].sprite, obstacle[j].texture, 0);
            sfSprite_setScale(obstacle[j++].sprite, size);
        }
    }
    position_obstacle2(obstacle, map);
}
