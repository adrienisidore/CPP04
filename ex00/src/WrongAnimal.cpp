/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:19:04 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/18 16:23:01 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("random WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called for "
	<< this->type << std::endl;
}

WrongAnimal::WrongAnimal(std::string const type_) : type(type_)
{
	std::cout << "WrongAnimal constructor called for "
	<< this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
	std::cout << "WrongAnimal copy constructor called for "
	<< this->type << std::endl;	
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
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

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal default destructor called for "
	<< this->type << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "*make wrong animal noise*" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::setType(std::string const typ)
{
	this->type = typ;
}