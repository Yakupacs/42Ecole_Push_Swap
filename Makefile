# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 18:47:11 by yacis@stude       #+#    #+#              #
#    Updated: 2022/10/15 18:49:28 by yacis@stude      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = src/main.c

OBJS = $(SRCS:.c=.o)

CC = gcc

MFLAGS = ./libft/libft.a ./ft_printf/libftprintf.a

AFLAGS =  -Wall -Wextra -Werror -I./libft -I./ft_printf

RM = rm -rf

all :$(MFLAGS) $(NAME)

$(MFLAGS):
	make -C ./libft
	make -C ./ft_printf

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(MFLAGS) $(AFLAGS) -o $(NAME)

fclean : clean
	make fclean -C ./libft
	make fclean -C ./ft_printf
	$(RM) $(NAME)

clean :
	make clean -C ./libft
	make clean -C ./ft_printf
	$(RM) ./src/*.o

re : fclean all

.PHONY : all fclean clean re