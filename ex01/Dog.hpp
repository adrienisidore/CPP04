/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:18:51 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/23 14:45:45 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "./Animal.hpp"
# include "./Brain.hpp"
# include <iostream>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(std::string const type_);
		Dog(const Dog &copy);
		Dog				&operator=(const Dog &rhs);
		~Dog(void);

		void			setIdea(int idx, std::string const &idea);
		std::string		getIdea(int idx) const;
		
		void	makeSound(void) const;
	private:
		Brain*	_brain;
};

#endif