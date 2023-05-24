# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paulorod <paulorod@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 15:48:50 by paulorod          #+#    #+#              #
#    Updated: 2023/05/05 13:30:34 by paulorod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c \
	ft_print_formats.c \
	ft_print_char.c \
	ft_print_strings.c \
	ft_print_nbrs.c \
	ft_print_pointer.c \
	ft_print_hex.c \
	ft_print_percentage.c

SRCS_OBJECTS = $(SRCS:.c=.o)
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(SRCS_OBJECTS)
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(SRCS_OBJECTS)
$(LIBFT):
	make -C $(LIBFT_PATH) all
clean:
	rm -f $(SRCS_OBJECTS)
	make -C $(LIBFT_PATH) clean
fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_PATH) fclean
re: fclean all
