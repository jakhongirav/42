# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jabdujal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/07 13:10:10 by jabdujal          #+#    #+#              #
#    Updated: 2026/10/12 13:45:32 by jahongirabduj    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a

# Directories
LIBFT_DIR   = Libft
LIBFT       = $(LIBFT_DIR)/libft.a
OBJ_DIR     = obj

CC          = cc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -rf
MKDIR       = mkdir -p

# Sources and Objects
SRCS        = ft_printf.c print_char.c print_nbr.c
OBJS        = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

# Rule to compile .c files into obj/%.o
$(OBJ_DIR)/%.o: %.c ft_printf.h | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create obj directory if it does not exist
$(OBJ_DIR):
	$(MKDIR) $(OBJ_DIR)

# Submodule Libft rule
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

test: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o test_printf
	./test_printf
	$(RM) test_printf

.PHONY: all clean fclean re
