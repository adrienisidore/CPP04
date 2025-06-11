/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:19:04 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/11 14:45:52 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("random animal")
{
	std::cout << "Animal default constructor called for " << this->type << std::endl;
}

Animal::Animal(std::string type_) : type(type_)
{
	std::cout << "Animal default constructor called for " << this->type << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << "Animal copy constructor called for " << this->type << std::endl;	
}

Animal	&Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignment operator called : " << this->type << "becomes " << rhs.type << std::endl;
		this->type = rhs.type;
	}
	else
		std::cout << "Assignment operator called for the same instance" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal default destructor called for " << this->type << std::endl;
}