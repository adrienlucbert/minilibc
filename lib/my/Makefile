##
## EPITECH PROJECT, 2019
## My
## File description:
## Makefile
##

SRC			=	my_atoi.c						\
				my_putnbr.c						\
				my_itoa.c						\
				my_putchar.c					\
				my_putstr.c						\
				my_calloc.c						\
				my_memset.c						\
				my_realloc.c					\
				my_memcpy.c						\
				my_strcpy.c						\
				my_memcmp.c						\
				my_strcmp.c						\
				my_memlen.c						\
				my_strlen.c						\
				my_memdup.c						\
				my_strdup.c						\
				my_memcat.c						\
				my_strcat.c						\
				my_memchr.c						\
				my_strchr.c						\
				my_memmem.c						\
				my_strstr.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libmy.a
PATHNAME	=	../$(NAME)

CFLAGS		=	-I../../include -g

all:	$(PATHNAME)

$(PATHNAME):	$(OBJ)
	cp my.h ../../include
	ar rc $(PATHNAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(PATHNAME)

re:	fclean all

.PHONY:	all clean fclean re