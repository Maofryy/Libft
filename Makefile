# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 21:44:08 by mbenhass          #+#    #+#              #
#    Updated: 2018/11/21 12:15:44 by mbenhass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.c)

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEAD = ./

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : ./libft.h
	gcc $(FLAGS) -I $(HEAD) -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

#%.o: %.c
#	gcc $(FLAGS) -I $(HEAD) -o $@ -c $<


clean :
	/bin/rm -rf *.o */*.o

fclean : clean
	/bin/rm -rf $(NAME)
	/bin/rm -rf $(LIB)

re : fclean all

.PHONY : all clean fclean re
