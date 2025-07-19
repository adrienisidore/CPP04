/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:14:14 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 17:21:46 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice default constructor called"
	<< std::endl;
}

//Ice est un Materia, on peut faire appel au constructeur
//de recopie AMateria
Ice::Ice(Ice const & copy)
: AMateria(copy)
{
	std::cout << "Ice copy constructor called for "
	<< this->_type << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
	std::cout << "Ice assignment operator called for "
	<< rhs._type << std::endl;
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice default destructor called" << std::endl;
	return ;
}

//Le Materia renvoye (via une ref) ne peut pas etre modifie
const std::string& Ice::getType(void) const
{
	return (this->_type);
}

AMateria	*Ice::clone(void) const
{
	std::cout << "Cloning Ice Materia" << std::endl;
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
	<< " *'" << std::endl;
}