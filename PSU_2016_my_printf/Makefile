##
## Makefile for Makefile in /home/jeremy.elkaim/PSU_2016_my_printf
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Wed Nov 16 14:15:32 2016 jeremy elkaim
## Last update Sat Nov 19 19:18:01 2016 jeremy elkaim
##

NAME    = libmy.a

SRC    = my_printf.c

OBJ    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -rf $(OBJS)

fclean:			clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
