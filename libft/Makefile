# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 12:51:23 by ahiguera          #+#    #+#              #
#    Updated: 2023/10/18 11:40:06 by ahiguera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -c -Wall -Wextra -Werror

SRC =	ft_atoi.c			ft_bzero.c		\
		ft_calloc.c			ft_isalnum.c	\
		ft_isalpha.c		ft_isascii.c	\
		ft_isdigit.c		ft_isprint.c	\
		ft_memchr.c			ft_memcmp.c		\
		ft_memcpy.c			ft_memmove.c	\
		ft_memset.c			ft_putchar_fd.c \
		ft_putendl_fd.c		ft_putnbr_fd.c	\
		ft_putstr_fd.c		ft_strchr.c		\
		ft_strdup.c			ft_strjoin.c	\
		ft_strlcat.c		ft_strlcpy.c	\
		ft_strlen.c			ft_strmapi.c	\
		ft_strncmp.c		ft_strnstr.c	\
		ft_strrchr.c		ft_strtrim.c	\
		ft_substr.c			ft_toupper.c	\
		ft_tolower.c						\

BONUS = ft_lstnew.c			ft_lstadd_front.c \
		ft_lstsize.c		ft_lstadd_back.c  \
		ft_lstlast.c		ft_lstdelone.c    \
		ft_lstclear.c		ft_lsttiter.c     \
		ft_lstmap.c                           \

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc $(CFLAGS) $(SRC)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJ_BONUS)
		ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS)

$(OBJ_BONUS): $(BONUS)
			gcc $(CFLAGS) $(BONUS)

.PHONY: all clean fclean re bonus