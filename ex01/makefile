# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/02 13:47:03 by yel-bouk          #+#    #+#              #
#    Updated: 2025/07/02 13:47:04 by yel-bouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
       phonebook.cpp \
       contacts.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
