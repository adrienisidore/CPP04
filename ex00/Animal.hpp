/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:18:51 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/12 13:57:52 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(std::string type_);
		Animal(const Animal &copy);
		Animal	&operator=(const Animal &rhs);
		virtual ~Animal(void);//LE DESTRUCTEUR DU PARENT DOIT AUSSI ETRE VIRTUAL
		virtual void makeSound(void) const;//const: ne peut modifier l'instance courante
		
		//Doit on egalement mettre getType et setType en virtual ? Ou meme de les reecrire dans Cat et Dog ?
		//Le type que je veux modifier est celui present dans l'instance Animal
		std::string	getType(void) const;//const: ne peut modifier l'instance courante
		void setType(std::string typ);
};

#endif