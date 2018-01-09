# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: passef <passef@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/23 22:58:59 by passef            #+#    #+#              #
#    Updated: 2018/01/08 16:51:05 by passef           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =	libft.a
LIBFT = libft/libft.a

SRC =	main.c \
		libft/ft_get_next_line.c \
		libft/ft_strjoin.c \
		libft/ft_strlen.c \
		libft/ft_strnew.c \
		libft/ft_bzero.c \
		libft/ft_strcmp.c \
		libft/ft_atoi.c \
		libft/ft_strcpy.c \

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
	@echo "\033[K$(CY)[bistromatic] :$(CE) $(CG)Creating Library$(CE)\033[1A";
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[K$(CY)[bistromatic] :$(CE) $(CG)bistromatic Compiled!$(CE)";
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "\033[K$(CY)[bistromatic] :$(CE) $(CG)Compiling $<$(CE) \033[1A";
clean:
	@$(RM) $(OBJ)
	@make $(LFT) clean
	@echo "\033[K$(CY)[bistromatic] :$(CE) $(CG)Cleaning Object files $(CE)";
fclean: clean
	@$(RM) $(NAME)
	@make $(LFT) fclean
	@echo "\033[K$(CY)[bistromatic] :$(CE) $(CG)Cleaning bistromatic $(CE)";
re: fclean all