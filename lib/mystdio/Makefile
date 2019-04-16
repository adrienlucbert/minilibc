##
## EPITECH PROJECT, 2019
## MyStdIO
## File description:
## Makefile
##

SRC			=	my_dprintf.c				\
				my_fprintf.c				\
				my_iob.c					\
				my_printf.c					\
				my_snprintf.c				\
				my_sprintf.c				\
				my_sscanf.c					\
				my_vprintf.c				\
				my_vsprintf.c				\
				my_vsnprintf.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libmyio.a
PATHNAME	=	../$(NAME)

CFLAGS		=	-I../../include

all:	$(PATHNAME)

$(PATHNAME):	$(OBJ)
	cp mystdio.h ../../include
	ar rc $(PATHNAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(PATHNAME)

re:	fclean all

.PHONY:	all clean fclean re