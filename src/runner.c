/*
** EPITECH PROJECT, 2018
** runner
** File description:
** game
*/

#include "../csfml.h"

void close_win(sfRenderWindow *window)
{
    sfEvent event;
    sfEvent event2;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        } else if (event.type == sfEvtKeyPressed &&
                   event.key.code == sfKeyP) {
            while (sfRenderWindow_pollEvent(window, &event2) || 1) {
                    if (event2.type == sfEvtKeyPressed &&
                        event2.key.code == sfKeyP)
                        break;
            }
        }
    }
}

sfMusic *music_display(void)
{
    sfMusic *music = sfMusic_createFromFile(MUSIC);

    sfMusic_play(music);
    return (music);
}

void destroy_resources(sfRenderWindow *window, sfMusic *music,
                       ts_t back[6], pl_t player[1])
{
    sfMusic_destroy(music);
    sfTexture_destroy(back[0].texture);
    sfSprite_destroy(back[0].sprite);
    sfTexture_destroy(back[1].texture);
    sfSprite_destroy(back[1].sprite);
    sfTexture_destroy(back[2].texture);
    sfSprite_destroy(back[2].sprite);
    sfTexture_destroy(back[3].texture);
    sfSprite_destroy(back[3].sprite);
    sfTexture_destroy(back[4].texture);
    sfSprite_destroy(back[4].sprite);
    sfTexture_destroy(back[5].texture);
    sfSprite_destroy(back[5].sprite);
    sfTexture_destroy(player[0].texture);
    sfSprite_destroy(player[0].sprite);
    sfRenderWindow_destroy(window);
}

void destroy_resources2(obs_t obstacle[100])
{
    sfTexture_destroy(obstacle[0].texture);
    sfSprite_destroy(obstacle[0].sprite);
    sfTexture_destroy(obstacle[1].texture);
    sfSprite_destroy(obstacle[1].sprite);
}

int runner(char *map, int obsta)
{
    sfVideoMode video_mode = {1024, 600, 32};
    sfRenderWindow *window = sfRenderWindow_create(video_mode, "My_runner",
                                                   sfDefaultStyle, NULL);
    sfMusic *music = music_display();
    sfClock *clock = sfClock_create();
    ts_t back[6];
    pl_t player[1];
    obs_t obstacle[100];

    sfRenderWindow_setFramerateLimit(window, 6000);
    display_staff(back, player, obstacle, obsta, map);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        move_staff(back, obstacle, window, obsta, map);
        move_player(window, player, clock, obstacle, map, obsta);
        score_win(window);
        close_win(window);
    }
    destroy_resources(window, music, back, player);
    destroy_resources2(obstacle);
}
