# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matranch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/29 17:08:16 by matranch          #+#    #+#              #
#    Updated: 2017/12/11 18:39:24 by matranch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS= -Wall -Wextra -Werror

SRC= srcs/ft_memset.c\
	 srcs/ft_bzero.c\
	 srcs/ft_memcpy.c\
	 srcs/ft_memccpy.c\
	 srcs/ft_memmove.c\
	 srcs/ft_memchr.c\
	 srcs/ft_memcmp.c\
	 srcs/ft_strlen.c\
	 srcs/ft_strdup.c\
	 srcs/ft_strcpy.c\
	 srcs/ft_strncpy.c\
	 srcs/ft_strcat.c\
	 srcs/ft_strncat.c\
	 srcs/ft_strlcat.c\
	 srcs/ft_strchr.c\
	 srcs/ft_strrchr.c\
	 srcs/ft_strstr.c\
	 srcs/ft_strnstr.c\
	 srcs/ft_strcmp.c\
	 srcs/ft_strncmp.c\
	 srcs/ft_atoi.c\
	 srcs/ft_isalpha.c\
	 srcs/ft_isdigit.c\
	 srcs/ft_isalnum.c\
	 srcs/ft_isascii.c\
	 srcs/ft_isprint.c\
	 srcs/ft_toupper.c\
	 srcs/ft_tolower.c\
	 srcs/ft_memalloc.c\
	 srcs/ft_memdel.c\
	 srcs/ft_strnew.c\
	 srcs/ft_strdel.c\
	 srcs/ft_strclr.c\
	 srcs/ft_putchar.c\
	 srcs/ft_putstr.c\
	 srcs/ft_putendl.c\
	 srcs/ft_putnbr.c\
	 srcs/ft_striter.c\
	 srcs/ft_striteri.c\
	 srcs/ft_strmap.c\
	 srcs/ft_strmapi.c\
	 srcs/ft_strequ.c\
	 srcs/ft_strnequ.c\
	 srcs/ft_strsub.c\
	 srcs/ft_strjoin.c\
	 srcs/ft_strtrim.c\
	 srcs/ft_strsplit.c\
	 srcs/ft_itoa.c\
	 srcs/ft_putchar_fd.c\
	 srcs/ft_putstr_fd.c\
	 srcs/ft_putendl_fd.c\
	 srcs/ft_putnbr_fd.c\
	 srcs/ft_intlong.c\
	 srcs/ft_nombre.c\
	 srcs/ft_lstnew.c\
	 srcs/ft_lstadd.c\
	 srcs/ft_lstdel.c\
	 srcs/ft_lstdelone.c\
	 srcs/ft_lstiter.c\
	 srcs/ft_lstmap.c

NAME = libft.a
CC = gcc
INC = -I includes/
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
OBJ = $(SRC:.c=.o)
RM = rm -rf
RANLIB = ranlib

all: $(NAME)

$(NAME): $(OBJ)
	@echo "                            \033[31m[LIBFT]\033[0m : \033[34mCreating Library\033[0m";
	@echo "                            \033[31m[LIBFT]\033[0m : \033[34mIndexing Library\033[0m";
	@$(AR) $(NAME) $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@$(RANLIB) $(NAME)

depart:
	@echo "                                                                         ";
	@echo "                             _       _________ ______   _______ _________";
	@echo "                            ( \      \__   __/(  ___ \ (  ____ \\__   __/";
	@echo "                            | (         ) (   | (   ) )| (    \/   ) (   ";
	@echo "                            | |         | |   | (__/ / | (__       | |   ";
	@echo "                            | |         | |   |  __ (  |  __)      | |   ";
	@echo "                            | |         | |   | (  \ \ | (         | |   ";
	@echo "                            | (____/\___) (___| )___) )| )         | |   ";
	@echo "                            (_______/\_______/|/ \___/ |/          )_(   ";
	
%.o: %.c
	@echo "                            \033[31m[LIBFT]\033[0m : \033[34mCompiling $<\033[0m";
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@echo "                            \033[31m[LIBFT]\033[0m : \033[34mCleaning object files...\033[0m";
	@$(RM) $(OBJ)

fclean: clean
	@echo "                            \033[31m[LIBFT]\033[0m : \033[34mCleaning Library...\033[0m";
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
