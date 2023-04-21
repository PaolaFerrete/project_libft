# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 11:55:04 by pferrete          #+#    #+#              #
#    Updated: 2023/04/20 11:34:49 by pferrete         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#name of the project
NAME=libft.a

#.c files
C_SOURCE=$(wildcard *.c)

#.h files
H_SOURCE=libft.h

#object files
OBJ=$(C_SOURCE:.c=.o)

#compiler
CC=gcc

#flag for compiler
CC_FLAGS=-Wall   \
		 -Wextra \
		 -Werror

AR=@ar
ARFLAGS = rcs

#Compilation
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c %.h
	$(CC) $(CC_FLAGS) -c $< -o $@ 

clean:
	rm -f $(NAME) $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re