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

#include "Cat.hpp"
#include "Kitten.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

//ex01

// À la construction, les classes Dog et Cat créeront leur Brain avec new Brain();
// À la destruction, les classes Dog et Cat devront delete leur Brain.
// tableau d’objets Animal. Les destructeurs correspondants doivent être appelés dans le bon ordre.

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

int	main(void)
{

	//Se servir de WrongAnimal et WrongCat pour montrer que si je fais pas de copie profonde
	//alors ça cree un probleme à la destruction de mes instances (voir sujet correction)
	
	return (0);
}