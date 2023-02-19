# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kho-gia <kho-gia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 21:36:52 by kho-gia           #+#    #+#              #
#    Updated: 2023/01/26 20:48:07 by kho-gia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_memmove.c ft_memcmp.c ft_calloc.c ft_substr.c ft_itoa.c \
	ft_tolower.c ft_isalnum.c ft_strlen.c ft_memcmp.c ft_strjoin.c\
	ft_isdigit.c ft_isprint.c ft_toupper.c ft_strlcat.c ft_bzero.c ft_split.c \
	ft_isalpha.c ft_memset.c ft_isascii.c ft_strlcpy.c ft_memcpy.c ft_strtrim.c \
	ft_strncmp.c ft_strdup.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_strnstr.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_striteri.c ft_strmapi.c\

SRCS_BONUS = ft_lstiter.c ft_lstmap.c ft_lstclear.c ft_lstadd_back.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstdelone.c \

OBJS = ${SRCS:.c=.o}

OBJ_BONUS = $(SRCS_BONUS:.c=.o)

INC = libft.h

LIBC = ar rc

LIBR = ranlib

NAME = libft.a

AR = ar rc

RM = rm -f

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

.c.o: 
	cc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INC}
${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}	
		${LIBR} ${NAME}

bonus: ${OBJ_BONUS}
	${LIBC} ${NAME} ${OBJ_BONUS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}
	rm -f ${OBJ_BONUS}
fclean: clean
		rm -f ${NAME}
re:		fclean all

so:
	cc -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCS_BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJ_BONUS)

.PHONY:		all clean fclean re