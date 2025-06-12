/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:18:51 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/11 14:58:18 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(std::string type_);
		Cat(const Cat &copy);
		Cat	&operator=(const Cat &rhs);
		~Cat(void);
		// virtual ~Cat(void); Ca peut etre bien de le remettre a chaque fois
		// virtual void makeSound(void) const;
		void makeSound(void) const;
};

#endif