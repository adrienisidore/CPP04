/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:07:12 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 16:27:26 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const & copy);
				//Quand on assigne une Materia à une autre, copier son type n’a pas grand intérêt.
		Ice				&operator=(const Ice &rhs);
		~Ice(void);
		
		std::string const &	getType() const;
		Ice*				clone() const;
		void				use(ICharacter& target);
};