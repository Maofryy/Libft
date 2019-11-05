NAME	= libftprintf.a
SRC		= ft_printf.c ft_flags.c \
		  ft_test.c ft_conv.c \
			ft_buffer.c ft_buffer2.c ft_wide.c ft_conv_str.c \
			ft_int.c ft_conv_ptr.c ft_conv_float.c ft_conv_int.c ft_utils.c
OBJ = $(SRC:.c=.o);

SRC_DIR = ./srcs
OBJ_DIR = ./objs
INC_DIR = ./includes

SRCS	:= $(addprefix $(SRC_DIR)/,$(SRC))
OBJS	:= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
CCH = -I ./includes

#LIBFLAGS = -Ilibft/includes
#LIBFT	= libft/libft.a

GREEN = \033[0;32m
RED = \033[0;31m
WHITE = \033[0m

all: $(NAME)

$(NAME): $(OBJS) ./includes/ft_printf.h
	ar rcs $@ $(OBJS) && echo "$(GREEN)$@ successfully created$(WHITE)"
	ranlib $@

#$(LIBFT) :
#	$(MAKE) -C libft

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@/bin/mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(CCH) -o $@ -c $< && echo "$(GREEN)$@$(WHITE)"

clean:
	#$(MAKE) -C libft/ clean
	/bin/rm -f $(OBJ)

fclean: clean
	#$(MAKE) -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

//.SILENT: all $(NAME) clean fclean re

run: $(NAME)
	$(CC) main.c -o test.exe libftprintf.a && ./test.exe
