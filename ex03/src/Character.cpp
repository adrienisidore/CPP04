/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:57:39 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/22 17:52:18 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
: _name("random Character")
{
	std::cout << "Character default constructor called for "
	<< this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->_garbage[i] = NULL;
}

Character::Character(std::string const &name)
: _name(name)
{
	std::cout << "Character constructor called for "
	<< this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->_garbage[i] = NULL;	
}


Character::Character(const Character &copy)
{
	std::cout << "Character copy constructor called, "
	<< this->_name << "gets " << copy._name
	<< "'s characteristics" << std::endl;
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i]->clone();
	for (int i = 0; i < 100; i++)
		_garbage[i] = copy._garbage[i]->clone();
}

Character&	Character::operator=(const Character &rhs)
{
	std::cout << "Character assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			//Si l'emplacement contient une Materia on la supprime
			if (this->_inventory[i])
			{
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
			//On clone l'emplacement de l'inventaire rhs vers this
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();//copie profonde
		}
		for (int i = 0; i < 100; i++)
		{
			if (this->_garbage[i])
			{
				delete this->_garbage[i];
				this->_garbage[i] = NULL;
			}
			if (rhs._garbage[i])
				this->_garbage[i] = rhs._garbage[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character default destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	for (int i = 0; i < 100; i++)
		delete this->_garbage[i];
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

//Si plus de 100 elements au sol je refuse de desequiper