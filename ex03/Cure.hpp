/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:07:12 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 17:35:15 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
# define CURE_HPP

# include "./ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & copy);
		//Demander a Paul
		//Quand on assigne une Materia à une autre, copier son type n’a pas grand intérêt.
		Cure				&operator=(const Cure &rhs);
		~Cure(void);
		
		std::string const &	getType() const;
		virtual AMateria*	clone() const;//clone Cure, qui est un Materia
		virtual void		use(ICharacter& target);
};

#endif