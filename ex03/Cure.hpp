/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:07:12 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 16:27:16 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & copy);
		//Quand on assigne une Materia à une autre, copier son type n’a pas grand intérêt.
		Cure				&operator=(const Cure &rhs);
		~Cure(void);
		
		std::string const &	getType() const;
		Cure*				clone() const;
		void				use(ICharacter& target);
};