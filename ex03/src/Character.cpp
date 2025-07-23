/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:57:39 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/23 20:05:34 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Character.hpp"

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

void	Character::gotogarbage(AMateria **mm, int idx)
{
	//Je place la Materia a la 1ere position trouvee dans la poubelle
	for (int i = 0; i < 100; i++)
	{
		if (this->_garbage[i] == NULL)
		{
			std::cout << "Materia " << mm[idx]->getType()
			<< " is dropped in the garbage." << std::endl;
			//Copie de l'adresse "mm[idx]" dans "_garbage[i]" 
			this->_garbage[i] = mm[idx];
			//Je retire m de l'inventory (de sa position precedente)
			mm[idx] = NULL;
			return;
		}
	}
	//La poubelle est pleine, la Materia est supprimee
	delete mm[idx];
}

std::ostream& operator<<(std::ostream& os, const AMateria& materia)
{
    os << materia.getType(); // ou une autre info lisible
    return os;
}

void	Character::display_inventory(void) const
{
	std::cout << "Now in the inventory you have :" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			std::cout << *(this->_inventory[i])  << std::endl;
		else
			std::cout << "[empty]" << std::endl;
	}
}

void	Character::equip(AMateria *m)
{
	//On cherche la 1ere place disponible pour equiper
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "Materia " << m->getType()
			<< " is equipped in position " << i + 1 << std::endl;
			this->display_inventory();
			return;
		}
	}
	std::cout << "Your inventory is full ! You can't equip this"
	<< " Materia " << m->getType() << "." << std::endl;
	gotogarbage(&m, 0);
	
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
	{
		std::cout << "Are you sure you're talking about the right position ?" << std::endl;
		return;
	}
	this->gotogarbage(this->_inventory, idx);
	std::cout << "Position " << idx << " in inventory is now empty" << std::endl;
	this->display_inventory();
	return;
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx] == NULL || idx < 0 || idx > 3)
		return ;
	this->_inventory[idx]->use(target);
}