/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:38:20 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/17 16:57:20 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Cat.hpp"
#include "../Dog.hpp"

int main(void)
{
	std::cout << "\n--- Basic tests ---" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "\n--- Build tab ---" << std::endl;
    const int SIZE = 4;
    Animal* animals[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        if (i < SIZE / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- Sounds check ---" << std::endl;
    for (int i = 0; i < SIZE; ++i)
        animals[i]->makeSound();

    std::cout << "\n--- Deep copy test ---" << std::endl;
    Cat original;
    original.setIdea(0, "I want fish.");
    Cat copy = original;

    std::cout << "Original idea: " << original.getIdea(0) << std::endl;
    std::cout << "Copy idea: " << copy.getIdea(0) << std::endl;

    copy.setIdea(0, "I want to sleep.");
    std::cout << "After modifying the copy:" << std::endl;
    std::cout << "Original idea: " << original.getIdea(0) << std::endl;
    std::cout << "Copy idea: " << copy.getIdea(0) << std::endl;

    std::cout << "\n--- Cleaning up ---" << std::endl;
    for (int i = 0; i < SIZE; ++i)
        delete animals[i];
    return (0);
}