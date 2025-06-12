/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:38:20 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/12 16:15:37 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Kitten.hpp"
#include "Dog.hpp"

//ex01

// À la construction, les classes Dog et Cat créeront leur Brain avec new Brain();
// À la destruction, les classes Dog et Cat devront delete leur Brain.
// tableau d’objets Animal. Les destructeurs correspondants doivent être appelés dans le bon ordre.

//checker les leaks

//copies profondes : recreer une nouvelle adresse memoire et copier tous les elements dedans. Si je delete l'un alors l'autre reste valide
//copie superficielle : copier simplement le pointeur. on a donc 2 objets qui pointent vers la meme chose. Si je delete l'un alors l'autre est invalide
// class A {
//     int* ptr;
// };
// A a;
// A b = a; // copie superficielle. a et b pointent vers la meme instance A.

// A::A(const A& other) {
//     ptr = new int(*other.ptr); // copie profonde : alloue une nouvelle case et copie la valeur
// }
// A c(a);//A c = a; fait appel a l'operateur de copie par convention C++


//ex02 Animal devient AAnimal, une classe abstraite

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* i = new Dog();
	const Animal* j = new Cat();
	const Animal* k;
	const Animal* const useless = new Cat();
	//const Animal* : je ne peux pas modifier le contenu pointe
	//Animal* const : le ptr lui meme est constant et doit etre initialise directement
	//const Animal* const : le contenu et le pointeur sont constants
	//Je peux donc declarer k et lui attribuer une valeur plus tard (qui sera alors figee)
	WrongAnimal*	w_meta = new WrongAnimal();
	WrongAnimal*	w_j = new WrongCat();
	
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
	std::cout << w_j->getType() << std::endl;
	
	meta->makeSound();
	w_meta->makeSound();
	i->makeSound();
	j->makeSound();
	w_j->makeSound();
	k->makeSound();
	
	//L'ordre importe peu
	delete i;
	delete j;
	delete w_j;
	delete k;
	delete meta;
	delete w_meta;
	delete useless;

	
	return (0);
}