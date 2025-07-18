/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:38:20 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/18 16:25:59 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Cat.hpp"
#include "../Kitten.hpp"
#include "../Dog.hpp"
#include "../WrongCat.hpp"

int	main(void)
{
	std::cout << std::endl << "meta :" << std::endl;
	const Animal* meta = new Animal();
	std::cout << std::endl  << "i :" << std::endl;
	const Animal* i = new Dog();
	std::cout << std::endl  << "j :" << std::endl;
	const Animal* j = new Cat();
	std::cout << std::endl  << "k :" << std::endl;
	const Animal* k;
	// std::cout << std::endl  << "useless :" << std::endl;
	// const Animal* const useless = new Cat();
	//const Animal* : je ne peux pas modifier le contenu pointe
	//Animal* const : le ptr lui meme est constant et doit etre initialise directement
	//const Animal* const : le contenu et le pointeur sont constants
	//Je peux donc declarer k et lui attribuer une valeur plus tard (qui sera alors figee)

	std::cout << std::endl  << "w_meta :" << std::endl;
	WrongAnimal*	w_meta = new WrongAnimal();
	std::cout << std::endl  << "w_j :" << std::endl;
	WrongAnimal*	w_j = new WrongCat();
	
	// (void)useless;
	// useless.setType("Angry Cat");//impossible de modifier le contenu pointe (const Animal* ...)
	// delete useless;
	// useless = new Dog();//impossible de modifier le ptr lui meme (...Animal* const)

	std::cout << std::endl  << "What is k ? Depending on j :" << std::endl;
	if (j->getType() == "Cat")
		k = new Kitten();
	else
		k = new Dog();
	std::cout << std::endl  << "Who's who ? :" << std::endl;
	std::cout << "k is a " << k->getType() << std::endl;
	std::cout << "i is a " << i->getType() << std::endl;
	std::cout << "j is a " << j->getType() << std::endl;
	std::cout << "w_j is a " << w_j->getType() << std::endl;

	std::cout << std::endl << "meta :" << std::endl;
	meta->makeSound();
	std::cout << std::endl << "w_meta :" << std::endl;
	w_meta->makeSound();
	std::cout << std::endl << "i :" << std::endl;
	i->makeSound();
	std::cout << std::endl << "j :" << std::endl;
	j->makeSound();
	std::cout << std::endl << "w_j :" << std::endl;
	w_j->makeSound();
	std::cout << std::endl << "k :" << std::endl;
	k->makeSound();
	std::cout << std::endl << std::endl;
	delete i;
	delete j;
	delete w_j;
	delete k;
	delete meta;
	delete w_meta;
	// delete useless;

	return (0);
}