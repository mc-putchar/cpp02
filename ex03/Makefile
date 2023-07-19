# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 00:56:14 by mcutura           #+#    #+#              #
#    Updated: 2023/07/19 18:19:06 by mcutura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Targets ---
NAME := bsp
# --- Sources ---
SRCS := main.cpp Fixed.cpp Point.cpp bsp.cpp
# --- Headers ---
HDRS := Fixed.hpp Point.hpp
# --- Compiler ---
CC := g++
# --- Flags ---
CFLAGS := -Wall -Wextra -Werror -std=c++98 -pedantic-errors
debug: CFLAGS += -ggdb3
# --- Utils --
RM := rm -rf

# --- Rules ---
all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

debug: all

clean:
fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean debug fclean re