/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:07:12 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 16:15:40 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../IMateriaSource.hpp"
//Pas besoin d'ajouter AMateria.hpp (car present dans IMateriaSource) ?

class Ice : public AMateria
{
	private:
	//Besoin d'attributs private ?	
	public:
		Ice(void);
		Ice(std::string const & type);
		Ice(Ice const & copy);
				//Quand on assigne une Materia à une autre, copier son type n’a pas grand intérêt.
		Ice				&operator=(const Ice &rhs);
		~Ice(void);
		
		std::string const &	getType() const;
		Ice*				clone() const;
		void				use(ICharacter& target);
};