/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:19:04 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/11 18:45:31 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// 1) Les tableaux membres (std::string ideas[100])
// ne peuvent pas être initialisés via une liste d'initialisation.
// Brain::Brain(std::string *ideas_) : ideas(ideas_)

//2) Les tableaux natifs ne sont pas assignables directement
// this->ideas = rhs.ideas; ==> FAUX

Brain::Brain(void)
{
	int	i;

	i = -1;
	while (++i < 100)
		this->ideas[i] = "";//evite les garbages values
	std::cout << "Brain default constructor called" << std::endl;
}

//Les tableaux en C++ n’ont pas de taille intégrée,
//on ne peut pas connaitre la taille de ideas_
// Brain::Brain(std::string *ideas_, int size)
Brain::Brain(std::string *ideas_)
{
	int	i;

	if (!ideas_)
	{
		std::cerr << "Null pointer passed to Brain constructor!" << std::endl;
		i = -1;
		while (++i < 100)
			this->ideas[i] = "";
		return;
	}
	i = -1;
	while (++i < 100)
		this->ideas[i] = ideas_[i];
	// while (++i < 100)
	// {
	// 	if (i < size)
	// 		this->ideas[i] = ideas_[i];
	// 	else
	// 		this->ideas[i] = "";
	// }
	std::cout << "Brain constructor called with ideas" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	int	i;

	i = -1;
	while (++i < 100)
		this->ideas[i] = copy.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	int	i;

	if (this != &rhs)
	{
		std::cout << "Assignment operator called" << std::endl;
		i = -1;
		//rhs est un Brain, donc forcement de taille 100
		while (++i < 100)
			this->ideas[i] = rhs.ideas[i];//Copie profonde
	}
	else
	{
		std::cout << "Assignment operator called for the same instance"
		<< std::endl;
	}
	return (*this);
}

std::string Brain::ft_getIdea(int idx) const
{
    if (idx >= 0 && idx < 100)
        return ideas[idx];
    std::cerr << "Index out of bounds in ft_getIdea: " << idx << std::endl;
    return ("");
}

void Brain::ft_setIdea(int idx, const std::string &idea)
{
    if (idx >= 0 && idx < 100)
        ideas[idx] = idea;
    else
        std::cerr << "Index out of bounds in ft_setIdea: " << idx << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain default destructor called" << std::endl;
}
