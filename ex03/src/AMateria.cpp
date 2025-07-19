/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:29:51 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 16:12:45 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../AMateria.hpp"

AMateria::AMateria(void)
: _type("undefined")
{
	std::cout << "AMateria default constructor called"
	<< std::endl;
}

AMateria::AMateria(std::string const & type)
: _type(type)
{
	std::cout << "AMateria constructor called for "
	<< this->_type << std::endl;
}

AMateria::AMateria(AMateria const & copy)
: _type(copy._type)
{
	std::cout << "AMateria copy constructor called for "
	<< this->_type << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	std::cout << "Assignment operator called for "
	<< rhs._type << std::endl;
	if (this != &rhs)
		this->_type = rhs._type; //copie profonde
	return (*this);
}


AMateria::~AMateria(void)
{
	return ;
}

//Le Materia renvoye (via une ref) ne peut pas etre modifie
const std::string& AMateria::getType(void) const
{
	return (this->_type);
}

//Phrase generique virtual, chaque Materia (Ice/Cure) a sa propre phrase
void AMateria::use(ICharacter& target)
{
	std::cout << "Use of a Materia on "
	<< target.getName() << std::endl;
}