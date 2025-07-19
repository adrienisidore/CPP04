/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Kitten.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:19:01 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/11 19:03:52 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Kitten.hpp"

Kitten::Kitten(void) : Cat("Kitten")
{
	std::cout << "Kitten default constructor called for "
	<< this->type << std::endl;
}

Kitten::Kitten(std::string const type_) : Cat(type_)
{
	std::cout << "Kitten constructor called for "
	<< this->type << std::endl;
}

Kitten::Kitten(const Kitten &copy) : Cat(copy)
{
	std::cout << "Kitten copy constructor called for "
	<< this->type << std::endl;	
}

Kitten	&Kitten::operator=(const Kitten &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignment operator called : "
		<< this->type << "becomes " << rhs.type << std::endl;
		this->type = rhs.type;//Cat::operator=(rhs);
	}
	else
	{
		std::cout << "Assignment operator called for the same instance"
		<< std::endl;
	}
	return (*this);
}

Kitten::~Kitten(void)
{
	std::cout << "Kitten default destructor called for "
	<< this->type << std::endl;
}

void Kitten::makeSound(void) const
{
	std::cout << "*kitt! kitt!*" << std::endl;
}