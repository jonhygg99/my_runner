/*
** EPITECH PROJECT, 2019
** player
** File description:
** move player
*/

#include "../csfml.h"

void jump_player(pl_t player[1], int jump, sfIntRect *size)
{
    static sfVector2f pos = {120, 400};

    size->left = 1500;
    pos.y += jump;
    sfSprite_setPosition(player[0].sprite, pos);
}

int jump_action(pl_t player[1])
{
    static int jump = 0;
    static int go = 0;

    if (go == 0) {
        if (sfKeyboard_isKeyPressed(sfKeySpace) ||
            sfKeyboard_isKeyPressed(sfKeyUp)) {
            jump = -20;
            go++;
        }
    } else {
        if (sfSprite_getPosition(player[0].sprite).y <= 320)
            jump = 20;
        else if ((sfSprite_getPosition(player[0].sprite).y >= 400)) {
            jump = 0;
            go = 0;
        }
    }
    return (jump);
}

int run_player(sfIntRect *size, int offset)
{
    if (size->left < 1142)
        size->left += offset;
    else
        size->left = 0  ;
    return (size->left);
}

int check_dead(pl_t player[1], obs_t obstacle[100], char *map, int obsta)
{
    static int dead = 0;
    static int j = 0;

    if (obsta == 1 && sfSprite_getPosition(obstacle[j].sprite).x <= 120)
        j++;
    if (obsta == 1 && sfSprite_getPosition(obstacle[j].sprite).x >= 120 &&
        sfSprite_getPosition(obstacle[j].sprite).x <= 220) {
        if (sfSprite_getPosition(player[0].sprite).y >= 380 &&
            sfSprite_getPosition(player[0].sprite).y <= 400) {
            dead = 1;
            return (dead);
        }
    }
    if (obsta == 0 && sfSprite_getPosition(obstacle[0].sprite).x >= 120 &&
        sfSprite_getPosition(obstacle[0].sprite).x <= 220) {
        if (sfSprite_getPosition(player[0].sprite).y >= 380 &&
            sfSprite_getPosition(player[0].sprite).y <= 400) {
            dead = 1;
            return (dead);
        }
    }
    return (dead);
}

int dead_animation(sfIntRect *size, int offset, sfRenderWindow *window)
{
    if (size->left < 3400 )
	size->left += offset;
    else
        sfRenderWindow_close(window);
    return (size->left);
}

void move_player(sfRenderWindow *window, pl_t player[1], sfClock *clock,
                 obs_t obstacle[100], char *map, int obsta)
{
    sfTime time = sfClock_getElapsedTime(clock);
    float seconds = (time.microseconds / 1000000.0);
    static sfIntRect size = {0, 0, 382, 500};
    static int jump = 0;
    int dead = check_dead(player, obstacle, map, obsta);

    jump = jump_action(player);
    if (seconds > 0.05) {
        if (dead == 1) {
            size.left = dead_animation(&size, 382, window);
        } else if (jump != 0) {
            jump_player(player, jump, &size);
        } else
            size.left = run_player(&size, 381.6);
        player[0].texture = sfTexture_createFromFile(PLAYER, NULL);
        sfSprite_setTexture(player[0].sprite, player[0].texture, 0);
        sfSprite_setTextureRect(player[0].sprite, size);
        sfClock_restart(clock);
    }
    sfRenderWindow_drawSprite(window, player[0].sprite, NULL);
}
