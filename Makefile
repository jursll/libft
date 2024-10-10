# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 14:53:31 by julrusse          #+#    #+#              #
#    Updated: 2024/10/10 11:04:11 by julrusse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

FILES	= ft_isalpha \
		  ft_isdigit \
		  ft_isalnum \
		  ft_isascii \
		  ft_isprint \
		  ft_strlen \
		  ft_memset \
		  ft_bzero \
		  ft_memcpy \
		  ft_memmove \
		  ft_strlcpy \
		  ft_strlcat \
		  ft_toupper \
		  ft_tolower \
		  ft_strchr \
		  ft_strrchr \
		  ft_strncmp \
		  ft_memchr \
		  ft_memcmp \
		  ft_strnstr \
		  ft_atoi \

OBJ		= $(FILES:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all, clean, fclean, re
