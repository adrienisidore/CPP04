/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:46:24 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/22 17:29:01 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "./IMateriaSource.hpp"

//Materia capable de detenir/cloner une Materia Ice ou Cure

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_mem[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource	&operator=(const MateriaSource &rhs);
		~MateriaSource(void);

		void			learnMateria(AMateria *src);
		AMateria		*createMateria(std::string const &type);
};

#endif