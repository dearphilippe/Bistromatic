# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: passef <passef@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/23 22:58:59 by passef            #+#    #+#              #
#    Updated: 2018/01/08 11:59:47 by passef           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =	libft.a
LIBFT = libft/libft.a

SRC =	libft/ft_utoa.c \
		libft/ft_strlen.c \
		libft/ft_strisnum.c \
		libft/ft_strdup.c \
		libft/ft_strdel.c \
		libft/ft_strcmp.c \
		libft/ft_size_bin.c \
		libft/ft_putwchar.c \
		libft/ft_putstr.c \
		libft/ft_putchar.c \
		libft/ft_memset.c \
		libft/ft_ltoa_base.c \
		libft/ft_llutoa.c \
		libft/ft_lltoa.c \
		libft/ft_lftoa.c \
		libft/ft_itoa_base.c \
		libft/ft_itoa.c \
		libft/ft_isdigit.c \
		libft/ft_ftoa.c \
		libft/ft_bzero.c \
		libft/ft_atoi.c \
		libft/ft_memalloc.c \
		libft/ft_strstr.c \
		libft/ft_strncmp.c \

OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
INC = -I includes/
FT = -I libft/
LFT = -C libft/
CG = \033[92m
CY =  \033[93m
CE = \033[0m

all: $(NAME)
$(NAME): $(OBJ)
	@echo "\033[K$(CY)[PRINTF] :$(CE) $(CG)Creating Library$(CE)\033[1A";
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[K$(CY)[PRINTF] :$(CE) $(CG)PRINTF Compiled!$(CE)";
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "\033[K$(CY)[PRINTF] :$(CE) $(CG)Compiling $<$(CE) \033[1A";
clean:
	@$(RM) $(OBJ)
	@make $(LFT) clean
	@echo "\033[K$(CY)[PRINTF] :$(CE) $(CG)Cleaning Object files $(CE)";
fclean: clean
	@$(RM) $(NAME)
	@make $(LFT) fclean
	@echo "\033[K$(CY)[PRINTF] :$(CE) $(CG)Cleaning PRINTF $(CE)";
re: fclean all