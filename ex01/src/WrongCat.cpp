/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:19:01 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/11 19:03:52 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called for " << this->type << std::endl;
}

WrongCat::WrongCat(std::string const type_) : WrongAnimal(type_)
{
	std::cout << "WrongCat default constructor called for " << this->type << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called for " << this->type << std::endl;	
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
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

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat default destructor called for " << this->type << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "* wrong meow! wrong meow!*" << std::endl;
}