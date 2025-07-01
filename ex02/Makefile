# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 14:09:31 by aisidore          #+#    #+#              #
#    Updated: 2025/07/01 13:56:28 by aisidore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

FLAGS = -Wall -Wextra -Werror -I. -std=c++98

SRC = src/main.cpp src/Animal.cpp src/Cat.cpp src/Dog.cpp src/Brain.cpp

OBJ = objets/main.o objets/Animal.o objets/Cat.o objets/Dog.o objets/Brain.o

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

objets/%.o: src/%.cpp
	mkdir -p objets
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f objets/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re