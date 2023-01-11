# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 19:47:11 by yhos              #+#    #+#              #
#    Updated: 2023/01/10 18:55:13 by yhos             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BSRCS =	ft_lstsize.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_lstiter.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstmap.c \
		ft_lstdelone.c \
		ft_lstclear.c \

OBJS = ${SRCS:.c=.o}

BOBJS = ${BSRCS:.c=.o}

INCS = libft.h

CFLAGS = -Wall -Wextra -Werror

CC = cc

LIB = ar rcs

RM = rm -rf

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(INCS)
			$(LIB) $(NAME) $(OBJS)

bonus:	$(BOBJS) $(INCS)
		$(LIB) $(NAME) $(BOBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS) $(BOBJS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all
