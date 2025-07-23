/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:39:19 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/23 19:59:26 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Character.hpp"
#include "../MateriaSource.hpp"
#include "../Ice.hpp"
#include "../Cure.hpp"

int	main(void)
{
	std::cout << "--- Creation of a MateriaSource ---" << std::endl;
	IMateriaSource* src = new MateriaSource();

	std::cout << std::endl << "--- Let's learn ! ---" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << std::endl << "--- Want to learn more ? ---" << std::endl;
	src->learnMateria(new Ice());
	
	std::cout << std::endl << "--- Creation of a Character ---" << std::endl;
	ICharacter* me = new Character("me");
	
	std::cout << std::endl << "--- Let's create some Materias"
	<< " from MateriaSource's memory ---";
	std::cout << std::endl << "--- and equip the Character 'me'"
	<< " ---" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl << "--- Want to equip more ? ---" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	

	std::cout << std::endl << "--- Replace the last Materia cure for a Materia ice ---" << std::endl;
	me->unequip(1);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	std::cout << std::endl << "--- Creation of Bob and use some Materias on him ---" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(3, *bob);

	std::cout << std::endl << "--- Let's clear me's inventory ---" << std::endl;
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	std::cout << std::endl << "--- Try to unequip an empty position ---" << std::endl;
	me->unequip(0);
	std::cout << std::endl << "--- Try to unequip a nonexistent position ---" << std::endl;
	me->unequip(10);
	
	
	std::cout << std::endl << "--- End of main() ---" << std::endl;
	delete bob;
	delete me;
	delete src;

	return (0);
}