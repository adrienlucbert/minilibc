##
## EPITECH PROJECT, 2019
## MyMath
## File description:
## Makefile
##


SRC	=	my_sqrt.c			\
		my_fac.c			\
		my_pow.c			\
		my_sin.c			\
		my_cos.c			\
		my_tan.c			\
		my_asin.c			\
		my_acos.c			\
		my_atan.c			\
		my_atan2.c			\
		my_abs.c			\
		my_floor.c			\
		my_ceil.c			\
		my_round.c			\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I../../include

NAME	=	libmyth.a
PATHNAME=	../$(NAME)

all:	$(NAME)

$(NAME):	$(OBJ)
	cp mymath.h ../../include
	ar rc $(PATHNAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(PATHNAME)

re:	fclean all

.PHONY:	all clean fclean re