/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:19:04 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/17 16:55:59 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"

Animal::Animal(void) : type("random animal")
{
	std::cout << "Animal default constructor called for "
	<< this->type << std::endl;
}

Animal::Animal(std::string const type_) : type(type_)
{
	std::cout << "Animal default constructor called for "
	<< this->type << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << "Animal copy constructor called for "
	<< this->type << std::endl;	
}

Animal	&Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignment operator called : "
		<< this->type << "becomes " << rhs.type << std::endl;
		this->type = rhs.type;
	}
	else
	{
		std::cout << "Assignment operator called for the same instance"
		<< std::endl;		
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal default destructor called for "
	<< this->type << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "*make animal noise*" << std::endl;
}

//Ne vaut-il pa mieux renvoyer une référence ?
//Dans les autres CPP je renvoie aussi une copie
std::string	Animal::getType(void) const
{
	return (this->type);
}

void Animal::setType(std::string const typ)
{
	this->type = typ;
}