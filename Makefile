# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 14:53:31 by julrusse          #+#    #+#              #
#    Updated: 2024/10/06 17:34:58 by julrusse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library	= libft

files	= ft_isalpha \
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

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= $(Library).a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

NAME	= $(OUTN)

$(NAME):
		$(Compiler)	$(CmpFlags) -c	$(CFILES) -I./
		ar -rc $(OUTN)	$(OFILES)

all:	$(NAME)

clean:
		rm -f $(NAME)
		rm -f $(OFILES)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all, clean, fclean, re