# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: passef <passef@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/23 22:58:59 by passef            #+#    #+#              #
#    Updated: 2018/01/13 09:57:36 by passef           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a
LIBFT =		libft/libft.a

SRC =		main.c \
			parsing.c \
			operations.c \
			handler.c \
			stack.c \
			validate.c \
			libft/ft_get_next_line.c \
			libft/ft_strjoin.c \
			libft/ft_strlen.c \
			libft/ft_strnew.c \
			libft/ft_bzero.c \
			libft/ft_strcmp.c \
			libft/ft_atoi.c \
			libft/ft_strcpy.c \
			libft/ft_isdigit.c \
			libft/ft_isascii.c \
			libft/ft_isprint.c \
			libft/ft_putchar.c \
			libft/ft_extract_fd.c \
			libft/ft_memcpy.c \
			libft/ft_putstr.c \
			libft/ft_strchr.c \
			libft/ft_isops.c \

OBJ =		$(SRC:.c=.o)
CC =		gcc
FLAGS =		-Wall -Wextra -Werror
RM =		rm -rf
INC =		-I includes/
FT =		-I libft/
LFT =		-C libft/
GREEN =		\033[92m
YELLOW =	\033[93m
ERASE =		\033[0m

all: $(NAME)
$(NAME): $(OBJ)
	@echo "\033[K$(YELLOW)[bistromatic] :$(ERASE) $(GREEN)Creating Library$(ERASE)\033[1A";
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[K$(YELLOW)[bistromatic] :$(ERASE) $(GREEN)bistromatic Compiled!$(ERASE)";
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "\033[K$(YELLOW)[bistromatic] :$(ERASE) $(GREEN)Compiling $<$(ERASE) \033[1A";
norm:
	@echo "norminetting C Files..."
	@norminette *.c
	@echo "norminetting Libft..."
	@norminette libft/*.c
clean:
	@$(RM) $(OBJ)
	@make $(LFT) clean
	@echo "\033[K$(YELLOW)[bistromatic] :$(ERASE) $(GREEN)Cleaning Object files $(ERASE)";
fclean: clean
	@$(RM) $(NAME)
	@make $(LFT) fclean
	@echo "\033[K$(YELLOW)[bistromatic] :$(ERASE) $(GREEN)Cleaning bistromatic $(ERASE)";
re: fclean all