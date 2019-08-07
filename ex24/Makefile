# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spuisais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 12:08:45 by spuisais          #+#    #+#              #
#    Updated: 2018/09/17 11:20:07 by spuisais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS = ./includes
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
	          ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = libft.a

all    : objects
	    ar rc $(LIB) $(OBJS)
		    ranlib $(LIB)

objects :
	    $(CC) $(CFLAGS) -c $(SRCS) -I $(HEADERS)

clean :
	    rm -rf $(OBJS)

fclean : clean
	    rm -rf $(LIB)

re : fclean all
