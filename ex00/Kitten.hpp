/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Kitten.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:18:51 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/17 12:03:57 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	KITTEN_HPP
# define KITTEN_HPP

# include "./Cat.hpp"
# include <iostream>

class Kitten : public Cat
{
	public:
		Kitten(void);
		Kitten(std::string const type_);
		Kitten(const Kitten &copy);
		Kitten			&operator=(const Kitten &rhs);
		virtual ~Kitten(void);
		
		virtual void	makeSound(void) const;
};

#endif