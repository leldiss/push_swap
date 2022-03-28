# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 15:03:59 by leldiss           #+#    #+#              #
#    Updated: 2022/03/28 09:54:30 by leldiss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP	= push_swap

PUSH_SWAP_SRCS = push_swap.c \
				./rule_ss_pp.c \
				./rule_rr.c \
				./rule_rrr.c \
				./utils.c \
				./utils2.c \
				./utils3.c \
				./utils4.c \
				./utils5.c \

OBJ = $(PUSH_SWAP_SRCS:.c=.o)

HEADER	= push_swap.h

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror -g

all: $(PUSH_SWAP)

$(PUSH_SWAP) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(PUSH_SWAP_SRCS) -o $(PUSH_SWAP)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(PUSH_SWAP)

re: fclean all

.PHONY : all clean fclean re