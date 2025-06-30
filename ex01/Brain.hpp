/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:21:33 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/12 15:58:43 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(std::string *ideas_);
		Brain(const Brain &copy);
		Brain		&operator=(const Brain &rhs);
		std::string ideas[100];//protected ????
};

#endif