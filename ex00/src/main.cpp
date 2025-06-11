/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:38:20 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/11 19:05:07 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

//ex00

//makesound dans Animal avec virtual (y compris pour Cat et Dog)

//Ces deux classes dérivées doivent initialiser leur type en fonction de leur nom. Ainsi,
// le type de Dog sera “Dog”, et celui de Cat sera “Cat”. ???

//Verifier le polymorphisme avec une nouvelle classe WrongAnimal
//Ecrire + de tests que ceux specifie dans le sujet

//Penser a delete Dog, Cat et Animal (dans le bon ordre?)


//ex01

// À la construction, les classes Dog et Cat créeront leur Brain avec new Brain();
// À la destruction, les classes Dog et Cat devront delete leur Brain.
// tableau d’objets Animal. Les destructeurs correspondants doivent être appelés dans le bon ordre.

//checker les leaks

//copies profondes ?

//ex02 Animal devient AAnimal, une classe abstraite

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* i = new Dog();
	const Animal* j = new Cat();

	
	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	

	//L'ordre importe peu je crois
	delete i;
	delete j;
	delete meta;
	return (0);
}