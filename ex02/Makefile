# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 14:52:05 by lvarela           #+#    #+#              #
#    Updated: 2022/06/01 10:38:41 by lvarela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	:=	$(wildcard *.cpp)
OBJS	:=	$(SRCS:%.cpp=%.o)
CC		:=	c++
CPPSTD	:=	-std=c++98
FLAGS	:=	-Wall -Werror -Wextra
RM		:=	rm -f
NAME	:=	Account

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(FLAGS) $(CPPSTD) $(OBJS) -o $(NAME)

$(%.o)	:	$(%.c)
			$(CC) -c $^ -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all $(NAME) clean fclean re

