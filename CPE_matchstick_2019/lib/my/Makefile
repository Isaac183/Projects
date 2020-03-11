##
## EPITECH PROJECT, 2019
## CPE_matchstick_2019
## File description:
## Makefile
##

SRC	=	my_getnbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		get_next_line.c	\
		my_put_nbr.c

CFLAGS	+=	-I../../include/ -g

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
