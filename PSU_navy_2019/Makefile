##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## just a makefile
##

SRC	=	scr/main.c		\
		scr/map.c		\
		scr/error.c		\
		scr/connection.c	\
		scr/help.c

NAME	=	navy

FLAGS	=	-L./lib/my -lmy -I./include/ -lm

all:
		make -sC ./lib/my/ all
		gcc -o $(NAME) $(SRC) $(FLAGS) -g -Wall -Wextra
		make -sC ./lib/my/ fclean

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		make -C ./lib/my/ all
		make -C ./lib/my/ fclean
		rm -f *~
		rm -f scr/*~
		rm -f lib/my/*~

re:  all
