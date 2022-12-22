# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 19:47:11 by yhos              #+#    #+#              #
#    Updated: 2022/12/22 08:20:50 by yhos             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_isdigit.c\
		ft_isalpha.c\

OBJS = ${SRCS:.c=.o}

INCS = libft.h

CFLAGS = -Wall -Wextra -Werror

CC = cc

LIB = ar rcs

RM = rm -rf

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(INCS)
			$(LIB) $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all
