# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 14:09:31 by aisidore          #+#    #+#              #
#    Updated: 2025/07/23 15:49:11 by aisidore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia

FLAGS = -Wall -Wextra -Werror -I. -std=c++98

SRC = src/AMateria.cpp src/Character.cpp src/Cure.cpp src/Ice.cpp src/main.cpp src/MateriaSource.cpp

OBJ = objets/AMateria.o objets/Character.o objets/Cure.o objets/Ice.o objets/main.o objets/MateriaSource.o

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