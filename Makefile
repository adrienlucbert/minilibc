##
## EPITECH PROJECT, 2019
## MiniLibC
## File description:
## Makefile
##


SRC		=	main.c

OBJ		=	$(SRC:.c=.o)

DEPS	=	lib/mymath	\
			lib/my		\
			lib/mystdio

CFLAGS	=	-Iinclude -Llib -lmyth -lmyio -lmy

NAME	=	minilibs

all:	makedeps	$(NAME)

makedeps:
	@for dep in $(DEPS);do\
		make -C $$dep;\
	done

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@for dep in $(DEPS);do\
		make clean -C $$dep;\
	done
	rm -f $(OBJ)

fclean:	clean
	@for dep in $(DEPS);do\
		make fclean -C $$dep;\
	done
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re