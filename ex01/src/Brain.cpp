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

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

// Les tableaux membres (std::string ideas[100]) ne peuvent pas être initialisés via une liste d'initialisation.
// Brain::Brain(std::string *ideas_) : ideas(ideas_)
Brain::Brain(std::string *ideas_)
{
	int	i;

	i = -1;
	while (i < 100)
		this->ideas[i] = ideas_[i];
	std::cout << "Brain default constructor called with ideas" << std::endl;
}

Brain::Brain(const Brain &copy) : ideas(copy.ideas)
{
	std::cout << "Brain copy constructor called" << std::endl;	
}

Brain	&Brain::operator=(const Brain &rhs)
{
	int	i;

	
	if (this != &rhs)
	{
		std::cout << "Assignment operator called" << std::endl;
		//Les tableaux natifs ne sont pas assignables directement
		// this->ideas = rhs.ideas;
		i = -1;
		while (++i < 100)
			this->ideas[i] = rhs.ideas[i];//Copie profonde ???
		//La pre-incrementation n'est effectuee qu'apres l'execution du code entre parentheses (idem pour post)
		//CONTRAIREMENT AU while
		// for (int i = 0; i < 100; ++i)

	}
	else
		std::cout << "Assignment operator called for the same instance" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain default destructor called" << std::endl;
}
