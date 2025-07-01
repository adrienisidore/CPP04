/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:38:20 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/01 14:06:52 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

//ex02 Animal devient AAnimal, une classe abstraite


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

// int	main(void)
// {
// 	//Classe abstraite : j'oblige que certaines fonctions a etre redefinies'
// 	//Interface : je suis oblige d'avoir toutes les fonctions qui ont = 0 ?

// 	//Se servir de WrongAnimal et WrongCat pour montrer que si je fais pas de copie profonde
// 	//alors ça cree un probleme à la destruction de mes instances (voir sujet correction)

// 	Animal	animal[100];

// 	//Moitie chien, moitie chat :
	

// 	// À la fin de l’exécution
// 	// du programme, parcourez ce tableau afin de delete chaque Animal. Vous devez delete
// 	// directement les chiens et les chats en tant qu’Animal. Les destructeurs correspondants
// 	// doivent être appelés dans le bon ordre.
	
// 	return (0);
// }



int main(void)
{
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

    return 0;
}