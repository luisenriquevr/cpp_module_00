# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 12:22:26 by lvarela           #+#    #+#              #
#    Updated: 2022/07/04 18:00:22 by lvarela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	:=	$(wildcard *.cpp)
OBJS	:=	$(SRCS:%.cpp=%.o)
CC		:=	c++
CPPSTD	:=	-std=c++98
FLAGS	:=	-Wall -Werror -Wextra
RM		:=	rm -f
NAME	:=	megaphone

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME) $(CPPSTD) 

$(%.o)	:	$(%.c)
			$(CC) -c $< -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
