# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Jules <Jules@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 16:14:58 by Jules             #+#    #+#              #
#    Updated: 2020/02/26 16:43:10 by Jules            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	

	  
OBJS = ${SRC:.c=.o}

INCLUDES = includes

NAME = libtest.a

LIBFT = ../../libft

CFLAGS = -Wall -Werror -Wextra

RM			= 	rm -rf

AR			= 	ar rcs

CC			= 	gcc

ATTRIBUT 	= 	-c

all: ${NAME}

-c.o:	${CC} ${CFLAGS} ${ATTRIBUT} $< -o $(<:.c=.o) -I${INCLUDES}

$(NAME): ${OBJS}
	make -C ${LIBFT}
	ar -rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}
	make clean -C ${LIBFT}

fclean : clean
	rm -f ${NAME}
	make fclean -C ${LIBFT}

re: fclean all

.PHONY: clean all fclean re


