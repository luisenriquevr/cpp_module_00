# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 14:52:05 by lvarela           #+#    #+#              #
#    Updated: 2022/04/07 14:52:38 by lvarela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	:=	Account.cpp tests.cpp
OBJS	:=	$(SRCS:.cpp=.o)
CC		:=	clang++
FLAGS	:=	-Wall -Werror -Wextra
RM		:=	rm -f
NAME	:=	Account

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean $(NAME)

.PHONY	:	all clean fclean re
