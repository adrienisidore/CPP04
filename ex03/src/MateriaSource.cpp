/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:33:25 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/23 16:21:15 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called"
	<< std::endl;
	for (int i = 0; i < 4; i++)
		this->_mem[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource copy constructor called"
	<< std::endl;
	for (int i = 0; i < 4; i++)
		this->_mem[i] = copy._mem[i]->clone();//heap
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_mem[i])
			{
				delete this->_mem[i];
				this->_mem[i] = NULL;
			}
			if (rhs._mem[i])
				this->_mem[i] = rhs._mem[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource default destructor called"
	<< std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_mem[i];
}

void	MateriaSource::learnMateria(AMateria *src)
{
	for (int i = 0; i < 4; i++)
	{
		//Si la memoire de la MateriaSource le permet...
		if (this->_mem[i] == NULL)
		{
			std::cout << "Materia " << src->getType()
			<< " learned" << std::endl;
			this->_mem[i] = src;//...on recupere l'adresse
			return;
		}
	}
	std::cout << "This MateriaSource can't learn more!" << std::endl;
	delete src;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_mem[i] && this->_mem[i]->getType() == type)
			return (this->_mem[i]->clone());
	}
	std::cout << "No materia of type " << type << "exists in this MateriaSource "
	<< "Make sure you learned it!"  << std::endl;
	return (NULL);
}