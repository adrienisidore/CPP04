/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:46:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/19 17:23:20 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

# include "./ICharacter.hpp"
# include <iostream>

class Character : public ICharacter
{
	private:
		std::string		inventory[4];
		std::string		garbage[100];
	public:
	//AJOUTER FORME CANONIQUE
		
};

#endif