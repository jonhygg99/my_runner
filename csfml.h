/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#ifndef _CSFML_H_
#define  _CSFML_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/FontInfo.h>
#include <SFML/Graphics/Font.h>
#include <SFML/System/InputStream.h>
#include <SFML/Graphics/Glyph.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Export.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <time.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Clock.h>
#include <stdlib.h>
#include <stddef.h>

struct ts_s {
    sfTexture *texture;
    sfSprite *sprite;
};
typedef struct ts_s ts_t;

struct pl_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
};
typedef struct pl_s pl_t;

struct obs_s {
    sfTexture *texture;
    sfSprite *sprite;
};
typedef struct obs_s obs_t;

int runner(void);
void display_backgrounds(ts_t back[6]);
void display_player(pl_t player[1]);
int move_background(sfRenderWindow *window, ts_t back[6]);
void move_player(sfRenderWindow *window, pl_t player[1], sfClock *clock,
                 obs_t obstacle[2]);
int display_all(ts_t back[6], pl_t player[1], obs_t obstacle[2]);
int score_win(sfRenderWindow *window);
void move_obstacle(sfRenderWindow *window, obs_t obstacle[2]);
void pause_game(sfRenderWindow *window);
void display_obstacle(obs_t obstacle[1]);
void info(char *exe);
void nothing(char *exe);
void my_putstr(char const *str);
char *my_itoa(int nb);

#endif
