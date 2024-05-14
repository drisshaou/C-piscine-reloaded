# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 14:33:18 by drhaouha          #+#    #+#              #
#    Updated: 2024/05/14 19:25:52 by drhaouha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN	=	'\033[0;32m'
ORANGE	=	'\033[0;33m'
RED		=	'\033[0;31m'
NC		=	'\033[0m'

SRCS	=	display_file.c

SRC		=	./srcs/

OBJS	=	$(addprefix ${SRC}, ${SRCS:.c=.o})

NAME	=	ft_display_file

.c.o:
			@gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}
			@echo -e ${GREEN}Object ${<:.c=.o} is created.${NC}

${NAME}:	${OBJS}
			 @gcc -Wall -Wextra -Werror -o $@ $^
			 @echo -e ${GREEN}The binary ${NAME} is created.${NC}

all:		${NAME}

clean:
			@rm -f ${OBJS}
			@echo -e ${ORANGE}Object ${OBJS} is removed.${NC}

fclean:		clean
			@rm -f ${NAME}
			@echo -e ${RED}The binary ${NAME} is removed.${NC}

.PHONY:		fclean clean all