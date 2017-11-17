# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matranch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 09:17:42 by matranch          #+#    #+#              #
#    Updated: 2017/11/17 18:24:51 by matranch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
DIR_SRC = ./srcs/
INCLUDES = -c -I ./includes/
SRCS = $(DIR_SRC)ft_putchar.c $(DIR_SRC)ft_putstr.c $(DIR_SRC)ft_strcmp.c $(DIR_SRC)ft_strlen.c $(DIR_SRC)ft_swap.c $(DIR_SRC)ft_memset.c
OBJS = ft_putstr.o ft_putchar.o ft_strcmp.o ft_strlen.o ft_swap.o ft_memset.o

all 	:	$(NAME)

$(NAME) :
			gcc $(CFLAGS) $(INCLUDES) $(SRCS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean	:	
			/bin/rm -rf *.o
			
fclean	:	
			/bin/rm -rf $(NAME)

re		:	fclean all


