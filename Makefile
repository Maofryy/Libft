# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 21:44:08 by mbenhass          #+#    #+#              #
#    Updated: 2018/11/20 15:17:27 by mbenhass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.c)

FLAGS = -Wall -Wextra -Werror

NAME = test

HEAD = ./

OBJ = $(SRCS:.c=.o)

LIB = libft.a

all : $(LIB)

$(NAME) : $(OBJ)
	gcc $(FLAGS) -I $(HEAD) -o $@ $^

%.o: %.c
	gcc $(FLAGS) -I $(HEAD) -o $@ -c $<

$(LIB) : $(OBJ)
	ar rc $@ $^
	ranlib $@

clean :
	/bin/rm -rf *.o */*.o

fclean : clean
	/bin/rm -rf $(NAME)
	/bin/rm -rf $(LIB)

re : fclean all

.PHONY : all clean fclean re
