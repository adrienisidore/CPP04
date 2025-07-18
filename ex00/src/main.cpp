/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:38:20 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/18 17:13:18 by aisidore         ###   ########.fr       */
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
	const Animal* k;
	std::cout << std::endl  << "w_meta :" << std::endl;
	WrongAnimal*	w_meta = new WrongAnimal();
	std::cout << std::endl  << "w_j :" << std::endl;
	WrongAnimal*	w_j = new WrongCat();
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

	return (0);
}