# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmei <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 20:57:11 by rmei              #+#    #+#              #
#    Updated: 2024/07/01 12:39:41 by rmei             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### -- VARIABLES -- ####
SRC = wireframe.c utils.c
OBJS = $(SRC:%.c=%.o)
NAME = fdf

CPPFLAGS = -I./libft -I/usr/local/include
CFLAGS = -Wall -Werror -Wextra 
LDFLAGS = -lm -lX11 -lXext -L./libft -lft -L/usr/local/lib -lmlx

#### -- RULES -- ####
all: $(NAME)

$(NAME): $(OBJS)
	make -sC libft
	cc $^ $(LDFLAGS) -o $@

%.o: %.c
	cc $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	make clean -sC libft
	rm -f $(OBJS)

fclean: 
	make fclean -sC libft
	rm -f $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
