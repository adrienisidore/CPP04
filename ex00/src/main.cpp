/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:38:20 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/12 15:01:25 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Kitten.hpp"
#include "Dog.hpp"

//ex00

//Verifier le polymorphisme avec une nouvelle classe WrongAnimal
//Ecrire + de tests que ceux specifie dans le sujet


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
	const Animal* k;//const Animal* : je ne peux pas modifier le contenu pointe		Animal* const : le ptr lui meme est constant et doit etre initialise directement		const Animal* const : le contenu et le pointeur sont constants
	//Je peux donc declarer k et lui attribuer une valeur plus tard (qui sera alors figee)
	const Animal* const useless = new Cat();

	(void)useless;
	// useless.setType("Angry Cat");//impossible de modifier le contenu pointe (const Animal* ...)
	// delete useless;
	// useless = new Dog();//impossible de modifier le ptr lui meme (...Animal* const)
	if (j->getType() == "Cat")
		k = new Kitten();
	else
		k = new Dog();
	std::cout << "k is a " << k->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;

	
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	k->makeSound();
	

	//L'ordre importe peu
	delete i;
	delete j;
	delete k;
	delete meta;
	delete useless;

	
	return (0);
}