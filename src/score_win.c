/*
** EPITECH PROJECT, 2019
** score window
** File description:
** score
*/

#include "../csfml.h"

int score_win(sfRenderWindow *window)
{
    sfVector2f pos = {900, 50};
    static int score = 0;
    char *str = my_itoa(score);
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile(FONT);
    sfColor color = sfColor_fromRGB(255, 255, 255);

    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 30);
    sfText_setColor(text, color);
    sfText_setPosition(text, pos);
    score += 1;
    sfRenderWindow_drawText(window, text, NULL);
    return (1);
}
