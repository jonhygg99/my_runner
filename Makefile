SRC	=	src/main.c	\
		src/runner.c	\
		src/information.c	\
		lib/my_putstr.c	\
		lib/my_putchar.c	\
		src/move_backgrounds.c	\
		src/display_backgrounds.c	\
		src/display_player.c	\
		src/move_player.c	\
		src/display_obstacle.c	\
		src/move_obstacle.c	\
		src/score_win.c	\
		lib/my_itoa.c	\
		lib/my_revstr.c	\
		lib/my_swap_char.c	\
		lib/my_strlen.c	\
		src/create_map.c	\
		src/display_staff.c	\

CFLAGS	=	-g3

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

NAME	=	my_runner

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CSFML)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
