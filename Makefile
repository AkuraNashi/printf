# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 20:24:22 by lcamilo-          #+#    #+#              #
#    Updated: 2022/10/25 18:38:20 by lcamilo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CfLAGS	=	-Wall -Wextra -Werror

CC		=	cc

SRCS	=	ft_printf.c				\
			ft_putchar.c			\
			ft_strchr.c				\
			ft_putstr.c				\
			ft_putnbr.c				\
			ft_putunbr.c			\
			ft_putnbr_base.c

OBJS	=	${SRCS:.c=.o}

RM		=	rm -f

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean all