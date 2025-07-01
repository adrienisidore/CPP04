/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:21:33 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/01 10:26:34 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];//Cette classe est un attribut de Cat et Dog,
	//on peut donc laisser ideas en private
	public:
		Brain(void);
		Brain(std::string *ideas_);
		Brain(const Brain &copy);
		Brain		&operator=(const Brain &rhs);
		~Brain(void);
		std::string ft_getIdea(int idx) const;
		void        ft_setIdea(int idx, std::string const &idea);
};

#endif