/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:52:07 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/04 16:32:26 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "\033[2J\033[H" << std::endl;
	const int size = 4;
	AAnimal* animals[size];

	std::cout << YELLOW << BOLD << "Creating Animals..." << RESET << std::endl;
	for (int i = 0; i < size / 2; i++) {
		animals[i] = new Dog();
		animals[i + size / 2] = new Cat();
	}

	std::cout << CYAN << std::endl << "Animals having ideas..." << std::endl << RESET;
	sleep(1);
	for (int i = 0; i < size / 2; i++) {
		Dog* dog = (Dog*)animals[i];
		if (dog) {
			dog->getBrain().setIdeas("Chase the mailman", 0);
			dog->getBrain().setIdeas("Where is my Owner?? 💭", 1);
			dog->getBrain().setIdeas("Bark at the cat 🐱 ", 2);
			dog->getBrain().setIdeas("Hunt this annoying car 🚗", 3);
			std::cout << GREEN << "Dog #" << i + 1 << "'s ideas: " << std::endl;
			std::cout << dog->getBrain().getIdeas(0) << std::endl;
			sleep(1);
			std::cout << dog->getBrain().getIdeas(1) << std::endl;
			sleep(1);
			std::cout << dog->getBrain().getIdeas(2) << std::endl;
			sleep(1);
			std::cout << dog->getBrain().getIdeas(3) << RESET << std::endl;
			sleep(1);
		}
		Cat* cat = (Cat*)animals[i + size / 2];
		if (cat) {
			cat->getBrain().setIdeas("I want to sleep... 💤", 0);
			cat->getBrain().setIdeas("hmmm ... let's climb the curtains", 1);
			cat->getBrain().setIdeas("i am hungry.. i want to eat the Canary 🐦 ", 2);
			cat->getBrain().setIdeas("The world is mine, I am God ", 3);
			std::cout << MAGENTA << "Cat #" << i + 1 << "'s ideas: " << std::endl;
			sleep(1);
			std::cout << cat->getBrain().getIdeas(0) << std::endl;
			sleep(1);
			std::cout << cat->getBrain().getIdeas(1) << std::endl;
			sleep(1);
			std::cout << cat->getBrain().getIdeas(2) << std::endl;
			sleep(1);
			std::cout << cat->getBrain().getIdeas(3) << RESET << std::endl;
			sleep(1);
		}
	}
	std::cout << BLUE << std::endl << "Creating deep copy of Cat and Dog..." << std::endl << RESET;
	sleep(1);
	Dog* copyDog = new Dog(*(Dog*)animals[0]);
	Cat* copyCat = new Cat(*(Cat*)animals[size / 2]);
	sleep(1);
	std::cout << GREEN << "Original Dog's idea: " << ((Dog*)animals[0])->getBrain().getIdeas(0) << RESET << std::endl;
	std::cout << GREEN << "Copied Dog's idea: " << copyDog->getBrain().getIdeas(0) << RESET << std::endl;

	std::cout << MAGENTA << "Original Cat's idea: " << ((Cat*)animals[size / 2])->getBrain().getIdeas(0) << RESET << std::endl;
	std::cout << MAGENTA << "Copied Cat's idea: " << copyCat->getBrain().getIdeas(0) << RESET << std::endl;

	std::cout << RED << std::endl << "Modifying original Dog's idea..." << std::endl << RESET;
	((Dog*)animals[0])->getBrain().setIdeas("Steal the food 🍗", 0);

	std::cout << GREEN << "Modified Dog's idea: " << ((Dog*)animals[0])->getBrain().getIdeas(0) << RESET << std::endl;
	std::cout << GREEN << "Copied Dog's idea remains: " << copyDog->getBrain().getIdeas(0) << RESET << std::endl;

	std::cout << YELLOW << std::endl << "Deleting all animals..." << std::endl << RESET;
	sleep(3);
	for (int i = 0; i < size; i++) {
		delete animals[i];
	}

	delete copyDog;
	delete copyCat;

	std::cout << BLUE << BOLD << "All animals deconstructed!" << RESET << std::endl;
	//AAnimal * boo = new Animal();
	return 0;
}
