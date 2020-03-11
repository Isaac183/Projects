##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile lib
##

SCR	=	my_strcompare.c	\
		powint.c	\
		my_getnbr.c	\
		my_putnbr.c	\
		my_putchar.c	\
		my_putstr.c	

OBJ	=	$(SCR:.c=.o)

NAME	=	libmy.a

CP	=	cp $(NAME) ../

CPH	=	cp my.h ../../include/


all:	$(NAME)
	$(CP)
	$(CPH)
clean:
	rm  libmy.a

fclean:	clean
	rm *.o

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

re:	fclean all
