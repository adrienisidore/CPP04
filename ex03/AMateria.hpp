/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:55:14 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 17:09:56 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

# include "./ICharacter.hpp"
# include <iostream>
		
class AMateria
{
	protected:
		std::string			_type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);
		AMateria			&operator=(const AMateria &rhs);
		virtual ~AMateria(void);
		
		std::string const &	getType() const;
		virtual AMateria*	clone() const = 0;//par def non defini dans .cpp
		virtual void		use(ICharacter& target);
};

#endif