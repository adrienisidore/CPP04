/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:13:56 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 17:36:53 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure default constructor called"
	<< std::endl;
}

//Cure est un Materia, on peut faire appel au constructeur
//de recopie AMateria
Cure::Cure(Cure const & copy)
: AMateria(copy)
{
	std::cout << "Cure copy constructor called for "
	<< this->_type << std::endl;
}

Cure &Cure::operator=(const Cure &rhs)
{
	std::cout << "Cure assignment operator called for "
	<< rhs._type << std::endl;
	// if (this != &rhs)
	// 	AMateria::operator=(rhs);
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure default destructor called" << std::endl;
	return ;
}

//Le Materia renvoye (via une ref) ne peut pas etre modifie
const std::string& Cure::getType(void) const
{
	return (this->_type);
}

AMateria	*Cure::clone(void) const
{
	std::cout << "Cloning Cure Materia" << std::endl;
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "'* heals " << target.getName()
	<< "’s wounds *'" << std::endl;
}