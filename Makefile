##
## EPITECH PROJECT, 2021
## ls
## File description:
## cd
##

SRC	=	$(shell find . -type f -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	golf_scorecard

all:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ) -lm -g

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
