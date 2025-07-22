/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:46:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/22 17:34:29 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

# include "./ICharacter.hpp"
# include "./AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_inventory[4];//tableau de Materias
		AMateria		*_garbage[100];//idem
	public:
		Character(void);
		Character(std::string const &name);
		Character(const Character &copy);//Ou "const ICharacter &copy" ?
		Character			&operator=(const Character &rhs);
		~Character(void);

		std::string const & getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);	
};

#endif