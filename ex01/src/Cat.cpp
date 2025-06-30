/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:19:01 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/12 17:29:06 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called for " << this->type << std::endl;
}

Cat::Cat(std::string const type_) : Animal(type_)
{
	std::cout << "Cat default constructor called for " << this->type << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called for " << this->type << std::endl;	
}

Cat	&Cat::operator=(const Cat &rhs)
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

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat default destructor called for " << this->type << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "*meow! meow!*" << std::endl;
}