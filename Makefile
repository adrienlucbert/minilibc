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
		$(MAKE) -C $$dep;\
	done

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@for dep in $(DEPS);do\
		$(MAKE) clean -C $$dep;\
	done
	rm -f $(OBJ)

fclean:	clean
	@for dep in $(DEPS);do\
		$(MAKE) fclean -C $$dep;\
	done
	rm -f $(NAME)

tests_run:
	$(MAKE) -C tests

re:	fclean all

.PHONY:	all clean fclean tests_run re