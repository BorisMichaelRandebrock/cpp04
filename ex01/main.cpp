/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:52:07 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 18:01:45 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "--------------Deep Copy Test--------------" << std::endl;

	Cat cat;
	cat.getBrain().setIdeas("Life in plastic is fantastic", 0);

	Cat lucy = cat; // Deep copy of Cat object
	std::cout << std::endl;

	std::cout << "Cat's idea: " << cat.getBrain().getIdeas(0) << std::endl;
	std::cout << "Lucy's idea: " << lucy.getBrain().getIdeas(0) << std::endl;

	std::cout << std::endl;
	std::cout << "Changing original cat's idea" << std::endl;
	cat.getBrain().setIdeas("I am become God, the destroyer of worlds", 0);
	std::cout << std::endl;

	std::cout << "Cat's new idea: " << cat.getBrain().getIdeas(0) << std::endl;
	std::cout << "Lucy's idea remains: " << lucy.getBrain().getIdeas(0) << std::endl;

	return 0;
}

