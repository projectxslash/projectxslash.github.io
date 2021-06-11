##
## EPITECH PROJECT, 2021
## make file
## File description:
## make file
##

SRC	=	src/main.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I ./include

NAME	=	golf_scorecard

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(INC) $(SRC) -g3

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -rf *~
	rm -rf include/*~ src/*~

re:	fclean all

.PHONY:	all clean fclean re
