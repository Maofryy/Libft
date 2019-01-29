# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 21:44:08 by mbenhass          #+#    #+#              #
#    Updated: 2019/01/29 14:36:00 by mbenhass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_lstadd.c \
	   ft_lstdel.c \
	   ft_lstdelone.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_lstnew.c \
	   ft_memalloc.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memdel.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_putchar.c \
	   ft_putchar_fd.c \
	   ft_putendl.c \
	   ft_putendl_fd.c  \
	   ft_putnbr.c  \
	   ft_putnbr_fd.c  \
	   ft_putstr.c  \
	   ft_putstr_fd.c  \
	   ft_strcat.c  \
	   ft_strchr.c  \
	   ft_strclr.c  \
	   ft_strcmp.c  \
	   ft_strcpy.c  \
	   ft_strdel.c  \
	   ft_strdup.c  \
	   ft_strequ.c  \
	   ft_striter.c  \
	   ft_striteri.c  \
	   ft_strjoin.c  \
	   ft_strlcat.c  \
	   ft_strlen.c  \
	   ft_strmap.c  \
	   ft_strmapi.c  \
	   ft_strncat.c  \
	   ft_strncmp.c  \
	   ft_strncpy.c  \
	   ft_strnequ.c  \
	   ft_strnew.c  \
	   ft_strnstr.c  \
	   ft_strrchr.c \
	   ft_strsplit.c  \
	   ft_strstr.c  \
	   ft_strsub.c  \
	   ft_strtrim.c  \
	   ft_tolower.c  \
	   ft_toupper.c \
	   ft_find_next_prime.c \
	   ft_power.c \
	   ft_sort_integer_list.c \
	   ft_sqrt.c \
	   ft_strcapitalize.c

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
	/bin/rm -rf $(OBJ) 

fclean : clean
	/bin/rm -rf $(NAME)
	/bin/rm -rf $(LIB)

re : fclean all

.PHONY : all clean fclean re
