# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 14:09:31 by aisidore          #+#    #+#              #
#    Updated: 2025/06/12 15:12:58 by aisidore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

FLAGS = -Wall -Wextra -Werror -I. -std=c++98

SRC = src/main.cpp src/Animal.cpp src/WrongAnimal.cpp src/Cat.cpp src/WrongCat.cpp src/Kitten.cpp src/Dog.cpp

OBJ = objets/main.o objets/Animal.o objets/WrongAnimal.o objets/Cat.o objets/WrongCat.o objets/Kitten.o objets/Dog.o

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