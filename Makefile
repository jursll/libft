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

Library		= libft

files		= ft_isalpha \
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

Compiler	= gcc
CmpFlags	= -Wall -Wextra -Werror
OUTN		= $(Library).a
CFILES		= $(files:%=%.c)
OFILES		= $(files:%=%.o)
NAME		= $(OUTN)

# // Nouveau fichier pour test //
MAIN_C		= main.c
TEST_EXEC	= test

$(NAME):
		$(Compiler)	$(CmpFlags) -c	$(CFILES) -I./
		ar -rc $(OUTN)	$(OFILES)

# // Règle pour compiler avec main.c //
$(TEST_EXEC): $(NAME) $(MAIN_C)
		$(Compiler) $(CmpFlags) -o $(TEST_EXEC) $(MAIN_C) $(NAME)

all:	$(NAME) $(TEST_EXEC)

clean:
		rm -f $(OFILES)

fclean:	clean
		rm -f $(NAME) $(TEST_EXEC)

re:		fclean all

.PHONY:	all, clean, fclean, re
