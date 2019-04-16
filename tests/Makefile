##
## EPITECH PROJECT, 2019
## MyMath
## File description:
## Makefile
##

SRC			=	evals.c			\
				eval_sin.c		\
				eval_cos.c		\
				eval_tan.c		\
				eval_asin.c		\
				eval_acos.c		\
				eval_atan.c		\
				eval_pow.c		\
				eval_sqrt.c		\
				eval_atan2.c	\
				eval_floor.c	\
				eval_ceil.c		\
				eval_round.c	\

OBJ			=	$(SRC:.c=.o)

NAME		=	evals

CFLAGS		=	-I../include -L../lib -lmyth -lm

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C ../lib/mymath
	gcc -o $(NAME) $(OBJ) $(CFLAGS)
	$(MAKE) clean
	clear
	./$(NAME)

clean:
	$(MAKE) clean -C ../lib/mymath
	rm -f $(OBJ)

fclean:	clean
	$(MAKE) fclean -C ../lib/mymath
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re