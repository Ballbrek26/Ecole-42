# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aonal <aonal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 13:01:05 by aonal             #+#    #+#              #
#    Updated: 2022/12/26 13:01:10 by aonal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)
all: $(NAME)
$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re