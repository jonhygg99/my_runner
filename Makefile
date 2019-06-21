SRC	=	main.c	\
		runner.c	\
		information.c	\
		my_putstr.c	\
		my_putchar.c	\
		move_backgrounds.c	\
		display_backgrounds.c	\
		display_player.c	\
		move_player.c	\
		display_obstacle.c	\
		move_obstacle.c	\
		score_win.c	\
		my_itoa.c	\
		my_revstr.c	\
		my_swap_char.c	\
		my_strlen.c	\
		display_all.c	\
		pause.c	\


CFLAGS	=	-Wall -Wextra -g -g3

#CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system #-lcsfml-font

NAME	=	my_runner

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
