# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opanchen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/06 12:39:22 by opanchen          #+#    #+#              #
#    Updated: 2017/05/19 16:27:01 by opanchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

HEAD = push_swap.h get_next_line.h

HEAD_GCH = $(HEAD:.h=.h.gch)

//FLAGS = -Wall -Wextra -Werror

SRC = flag_v.c     \
	  is_corect.c  \
	  arr.c        \
	  is_sort.c	\
	  game.c \
	  min.c  \
	  is_comand.c  \
	  get_next_line.c \
	  qwicksort.c \
	  sort.c  \
	  ps.c \
	  ex_sort.c  \

SRO = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRO)
			@gcc -c $(FLAGS) $(SRC) $(HEAD)
					@gcc -o $(NAME) $(SRO) libft/libft.a


clean:
			@rm -f $(SRO) $(HEAD_GCH)

fclean:
			@make clean
					@rm -f $(NAME)

re:
			@make fclean
					@make all

