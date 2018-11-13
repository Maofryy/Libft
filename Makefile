# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 21:44:08 by mbenhass          #+#    #+#              #
#    Updated: 2018/11/13 16:51:56 by mbenhass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.c)

FLAGS = #-Wall -Wextra -Werror

NAME = testLibft

HEAD = ./

OBJ = $(SRCS:.c=.o)

LIB = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
	gcc $(FLAGS) -I $(HEAD) -o $@ $^

%.o: %.c
	gcc $(FLAGS) -I $(HEAD) -o $@ -c $<

lib : 
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)

clean :
	/bin/rm -rf *.o */*.o

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
