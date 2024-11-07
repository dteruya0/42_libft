# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 12:27:50 by dteruya           #+#    #+#              #
#    Updated: 2024/11/07 14:34:47 by dteruya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project name
NAME = libft.a

# .c files
SRC = \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_itoa.c

# .c files from bonus
BONUS_SRCS = \
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

# .h files
DESP = libft.h

# Object files
OBJ = $(SRC:.c=.o)

# Object files from bonus
BONUS_OBJ = $(BONUS_SRCS:.c=.o)

# Compilator
CC = cc

# Flags
CFLAGS = -Wall -Wextra -Werror

# Lib with bonus
ifeq ($(findstring bonus, $(MAKECMDGOALS)), bonus)
	OBJ += $(BONUS_OBJ)
endif

# Compilation
all: $(NAME)

# Comp lib with bonus
bonus: $(NAME)

# Comp lib
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Comp all files
%.o: %.c $(DESP)
	$(CC) $(CFLAGS) -c $< -o $@ 

# Clean obj files
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

# Clean obj files and lib
fclean: clean
	rm -f $(NAME)

# Clean all
re: fclean all

# Ghost files
.PHONY: all bonus clean fclean re