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

# include "./Animal.hpp"
# include "./Brain.hpp"
# include <iostream>

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(std::string const type_);
		Cat(const Cat &copy);
		Cat				&operator=(const Cat &rhs);
		~Cat(void);

		void			setIdea(int idx, std::string const &idea);
		std::string		getIdea(int idx) const;

		void	makeSound(void) const;
	private:
		Brain*	_brain;
};

#endif