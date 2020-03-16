# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/30 18:49:14 by aeddaqqa          #+#    #+#              #
#    Updated: 2019/11/02 19:26:58 by aeddaqqa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRC = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_lstadd.c \
	  	ft_lstchr.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstprint.c \
		ft_memalloc.c \
	  	ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memset.c \
		ft_nbrcars.c \
		ft_nbrmots.c \
	  	ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
	  	ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_striter.c \
		ft_striteri.c \
	  	ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
	  	ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strsplit.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strswap.c \
		ft_strtrim.c \
		ft_tolower.c \
		ft_toupper.c

INC = libft.h

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@ $(CC) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
clean :
	@rm -rf $(OBJ)
fclean : clean
	@rm -rf $(NAME)
re : fclean all
