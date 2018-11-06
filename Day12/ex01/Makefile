# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 16:51:29 by florientako       #+#    #+#              #
#    Updated: 2018/11/06 17:27:53 by florientako      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c

OBJ = ft_cat.o

all : $(NAME)

$(NAME) :
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@echo "creation fichier objet [OK]"
	@gcc -o $(NAME) $(OBJ)
	@echo "creation executable [OK]"

clean :
	@rm -f $(OBJ)
	@echo "suppression .o [OK]"

fclean : clean
	@rm -f $(NAME)
	@echo "suppression executable [OK]"

re : fclean all