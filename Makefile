# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaciri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:46:00 by anaciri           #+#    #+#              #
#    Updated: 2021/11/21 19:40:57 by anaciri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRC = ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c \
ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c \
ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c \
ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c \
ft_tolower.c ft_bzero.c ft_isascii.c ft_memchr.c \
ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c \
ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c \
ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c \
ft_strmapi.c ft_strtrim.c
LIB = libft.h
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ) $(LIB)
	ar rc $(NAME) $(OBJ)

%.o : %.c
	gcc -c $< -o $@ $(CFLAGS)
	
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all
