/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:18:51 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/12 13:57:52 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type_);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		virtual ~WrongAnimal(void);//LE DESTRUCTEUR DU PARENT DOIT AUSSI ETRE VIRTUAL
		virtual void makeSound(void) const;//const: ne peut modifier l'instance courante
		
		//Doit on egalement mettre getType et setType en virtual ? Ou meme de les reecrire dans Cat et Dog ?
		//Le type que je veux modifier est celui present dans l'instance WrongAnimal
		std::string	getType(void) const;//const: ne peut modifier l'instance courante
		void setType(std::string typ);
};

#endif