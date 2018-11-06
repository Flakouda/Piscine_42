# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 16:51:29 by florientako       #+#    #+#              #
#    Updated: 2018/11/06 17:06:34 by florientako      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

OBJ = ft_display_file.o

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