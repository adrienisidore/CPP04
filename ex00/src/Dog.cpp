/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:18:59 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 17:01:29 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called for "
	<< this->type << std::endl;
}

Dog::Dog(std::string const type_) : Animal(type_)
{
	std::cout << "Dog constructor called for "
	<< this->type << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called for "
	<< this->type << std::endl;	
}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignment operator called : "
		<< this->type << "becomes " << rhs.type << std::endl;
		this->type = rhs.type;//Animal::operator=(rhs);
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
}

void Dog::makeSound(void) const
{
	std::cout << "*bark! bark!*" << std::endl;
}