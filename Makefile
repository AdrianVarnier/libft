# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avarnier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/30 12:55:17 by avarnier          #+#    #+#              #
#    Updated: 2020/05/26 12:04:10 by avarnier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

INC = libft.h

FCT =		ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_substr.c \
			ft_strchr.c \
			ft_strjoin.c \
			ft_strlcpy.c \
			ft_strmapi.c \
			ft_strnstr.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_lstadd_back.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstsize.c \
			ft_lstadd_front.c \
			ft_lstdelone.c \
			ft_lstlast.c \
			ft_lstnew.c \
			ft_strdel.c\
			ft_atof.c\
			ft_itoa_base.c\
			ft_atoi_base.c\

OBJ = $(addsuffix .o, $(basename $(FCT)))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c $(INC)
	$(CC) -c -o $@ $< $(FLAGS)

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
