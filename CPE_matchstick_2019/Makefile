##
## EPITECH PROJECT, 2019
## CPE_matchstick_2019
## File description:
## Makefile
##

SRC	=	main.c			\
		src/conv.c	\
		src/input.c	\
		src/my_ia.c		\
		src/win.c		\
		src/print_map.c		\
		src/print_map1.c

NAME	=	matchstick

all:	$(NAME)

$(NAME):
	make -C lib/my
	gcc -g -o $(NAME) $(SRC) -Iinclude -Llib/my -lmy -Wall -Wextra

clean:
	make clean -C lib/my

fclean:	clean
	rm -rf $(NAME)
	make fclean -C lib/my

re:	fclean all