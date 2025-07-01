/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:18:59 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/01 11:45:31 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal(), _brain(new Brain())
{
	this->type = "Dog";
	// this->_brain = new Brain();
	std::cout << "Dog default constructor called for "
	<< this->type << std::endl;
}

Dog::Dog(std::string const type_) : Animal(type_), _brain(new Brain())
{
	std::cout << "Dog default constructor called for "
	<< this->type << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called for "
	<< this->type << std::endl;
	this->_brain = new Brain(*copy._brain);
}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignment operator called : "
		<< this->type << "becomes " << rhs.type << std::endl;
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain); // deep copy
	}
	else
	{
		std::cout << "Assignment operator called for the same instance"
		<< std::endl;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog default destructor called for "
	<< this->type << std::endl;
	delete _brain;
}

void Dog::makeSound(void) const
{
	std::cout << "*bark! bark!*" << std::endl;
}