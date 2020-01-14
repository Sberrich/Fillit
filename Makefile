# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sberrich <sberrich@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/18 03:30:46 by yait-el-          #+#    #+#              #
#    Updated: 2019/07/23 17:54:34 by sberrich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT = libft/libft.a
SRC = main.c
SRC += checker.c backtracking.c drag.c ft_exit.c ft_print_solution.c map_holder.c solver.c
OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME):$(OBJ)
		@make -C libft 
		@echo "make libft"
		@echo "\033[92mdone!\033[0m"
		$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
clean:
		@echo "cleaning..."
		@make clean -C ./libft 
		rm -rf $(OBJ) 
		@echo "libft object files removed!"
		@echo "\033[92mdone!\033[0m"
fclean: clean 
		@rm -f $(NAME)
		@echo "fillit executable removed!"
		@make fclean -C ./libft 
		@echo "\033[92mdone!\033[0m"
		
re: fclean all
norme:
		norminette $(SRC)
		norminette fillit.h
