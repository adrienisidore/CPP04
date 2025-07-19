/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:07:12 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 17:23:41 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
# define ICE_HPP

# include "../ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const & copy);
		//Demander a Paul
		//Quand on assigne une Materia à une autre, copier son type n’a pas grand intérêt.
		Ice					&operator=(const Ice &rhs);
		~Ice(void);
		
		std::string const &	getType() const;
		virtual AMateria*	clone() const;//clone Ice, qui est un Materia
		virtual void		use(ICharacter& target);
};

#endif