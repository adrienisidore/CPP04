/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:19:01 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/18 18:41:32 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Cat.hpp"
#include "../Brain.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called for "
	<< this->type << std::endl;
}

Cat::Cat(std::string const type_) : Animal(type_), _brain(new Brain())
{
	std::cout << "Cat constructor called for "
	<< this->type << std::endl;
}

//*copy._brain : car _brain est un pointeur
Cat::Cat(const Cat &copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << "Cat copy constructor called for "
	<< this->type << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignment operator called : "
		<< this->type << "becomes " << rhs.type << std::endl;
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain); // copie profonde
	}
	else
	{
		std::cout << "Assignment operator called for the same instance"
		<< std::endl;		
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called for "
	<< this->type << std::endl;
	delete _brain;
}

void Cat::setIdea(int idx, std::string const &idea)
{
    this->_brain->ft_setIdea(idx, idea);
}

std::string Cat::getIdea(int idx) const
{
    return (this->_brain->ft_getIdea(idx));
}

void Cat::makeSound(void) const
{
	std::cout << "*meow! meow!*" << std::endl;
}