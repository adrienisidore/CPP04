/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:18:51 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/12 13:59:31 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(std::string type_);
		Dog(const Dog &copy);
		Dog	&operator=(const Dog &rhs);
		~Dog(void);
		// virtual ~Dog(void);//NECESSAIRE SI CHiot herite de Dog ?
		// virtual void makeSound(void) const;
		void makeSound(void) const;
};

#endif