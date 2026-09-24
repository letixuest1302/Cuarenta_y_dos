# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/24 13:22:02 by lesainz           #+#    #+#              #
#    Updated: 2026/09/24 13:51:56 by lesainz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCS = /*meter funciones*/
BFUNCS = /*meter funciones*/

NAME = libft.a
OBJECTS =  $(FUNCS .c=.o)
BONUS_OBJECTS = $(BFUNCS: .c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror 
REM = rm -f
AR = ar -r

all: $(NAME)

$(NAME):$(OBJECTS)

bonus: $(BONUS_OBJECTS)
	$(AR) $(NAME) $(BONUS_OBJECTS)

%.o:%.c
	$(CC) -c $(CFLAGS) $<

fclean:
	$(REM) $(OBJECTS) $(BONUS_OBJECTS)
	
fclean: clean
	$(REM) $(NAME)

re: fclean all bonus

.PHONY: all bonus clean rclean re 