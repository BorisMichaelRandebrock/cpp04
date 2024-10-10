/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:20:09 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/10 17:41:46 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <unistd.h>

int main(void)
{
	std::string studentName;

	std::cout << YELLOW << BOLD << "[ Welcome to Gandalf's Magical Training Academy! ]" << RESET << std::endl;
	std::cout << CYAN << "Gandalf the White is preparing to teach a student how to wield magical Materia..." << RESET << std::endl;
	sleep(1);
	std::cout << MAGENTA << "Enter the name of Gandalf's student: " << RESET;
	std::getline(std::cin, studentName);

	std::cout << GREEN << "Gandalf welcomes his eager student, " << studentName << ", to the lesson." << RESET << std::endl;
	sleep(1);

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << GREEN << "Gandalf prepares his legendary inventory!" << RESET << std::endl;
	sleep(1);
	ICharacter *gandalf = new Character("Gandalf the White");
	ICharacter *student = new Character(studentName);

	AMateria *tmp;

	std::cout << BLUE << "Gandalf shows " << studentName << " how to create and equip Ice Materia." << RESET << std::endl;
	sleep(1);
	tmp = src->createMateria("ice");
	gandalf->equip(tmp);

	std::cout << BLUE << "\"More frost, more power!\" Gandalf equips another Ice Materia." << RESET << std::endl;
	sleep(1);
	tmp = src->createMateria("ice");
	gandalf->equip(tmp);

	std::cout << MAGENTA << "Next, Gandalf demonstrates the power of healing with Cure Materia." << RESET << std::endl;
	sleep(1);
	tmp = src->createMateria("cure");
	gandalf->equip(tmp);

	std::cout << CYAN << "Gandalf equips another Cure Materia to complete the limit." << RESET << std::endl;
	sleep(1);
	tmp = src->createMateria("cure");
	gandalf->equip(tmp);

	std::cout << RED_BACKGROUND << "Gandalf: \"Watch this, " << studentName << "! I will try to equip a fifth Materia...\"" << RESET << std::endl;
	sleep(1);
	tmp = src->createMateria("ice");
	gandalf->equip(tmp);
	std::cout << RED << "Gandalf: \"Oops! We cannot equip more than four Materias at once.\"" << RESET << std::endl;
	sleep(2);

	std::cout << BLUE << "Gandalf turns to " << studentName << " and says, \"Now, witness the power of Ice!\", are you ready " << studentName << "?" << RESET << std::endl;
	std::string answer;
	std::cin >> answer;
	if (answer.compare("yes") == 0) {
		std::cout << "Be aware,.. its getting cold.. " << std::endl << gandalf->getName() << " ";
	} else {
		std::cout << "Hahaha, then take it anyway.. here comes the frost..!" << std::endl << gandalf->getName() << " " ;
	}
	gandalf->use(0, *student);

	std::cout << YELLOW << studentName << " shivers as the ice bolt strikes!" << RESET << std::endl;
	sleep(1);

	std::cout << MAGENTA << "Gandalf smiles and says, \"Don't worry, I will heal you now!\"" << RESET << std::endl;
	sleep(1);
	gandalf->use(5, *student);
	sleep(1);
	std::cout << gandalf->getName() << " says: " << CYAN << "Uups... there was nothing in that position" << RESET << std::endl;
	sleep(2);
	std::cout << YELLOW << "But do not worry... now i will take care of you.." << RESET << std::endl;
	sleep(2);
	gandalf->use(2, *student);

	std::cout << GREEN << studentName << " feels much better after the healing!" << RESET << std::endl;
	sleep(1);

	std::cout << YELLOW << BOLD << "[ Gandalf's Magical Lesson is Over! ]" << RESET << std::endl;
	delete student;
	delete gandalf;
	delete src;
	return 0;
}
