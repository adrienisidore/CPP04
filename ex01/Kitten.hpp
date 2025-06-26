/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Kitten.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:18:51 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/12 17:27:08 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	KITTEN_HPP
# define KITTEN_HPP


//Classe abstraite : j'oblige que certaines fonctions a etre redefinies'
//Interface : je suis oblige d'avoir toutes les fonctions qui ont = 0 ?

# include "Cat.hpp"
//Ne possede pas de Brain car c'est un attribut prive de Cat
class Kitten : public Cat
{
	public:
		Kitten(void);
		Kitten(std::string type_);
		Kitten(const Kitten &copy);
		Kitten	&operator=(const Kitten &rhs);
		~Kitten(void);
		void makeSound(void) const;
};

#endif