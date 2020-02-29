##
## EPITECH PROJECT, 2020
## 106bombyx
## File description:
## Makefile
##

NAME	=	106bombyx

SRC	=	src/main.c		\
		src/start.c		\
		src/bombyx.c		\
		src/display_h.c		\
		src/error_handling.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wextra -Wall

CPPFLAGS=	-I./include/

TEST	=	tests/unit_tests.c -I./include --coverage -lcriterion

LDFLAGS	=	-lm

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS) $(LDFLAGS)

tests_run	:
		gcc -o unit_tests src/start.c           \
				src/bombyx.c            \
				src/display_h.c         \
				src/error_handling.c $(TEST)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *.gcno
		rm -f *.gcda
		rm -f data

re	:	fclean all

.PHONY	:	all tests_run clean fclean re
