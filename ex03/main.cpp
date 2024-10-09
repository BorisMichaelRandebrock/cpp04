/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:20:09 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/08 18:12:55 by brandebr         ###   ########.fr       */
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

    // Ask for the student's name
    std::cout << MAGENTA << "Enter the name of Gandalf's student: " << RESET;
    std::getline(std::cin, studentName);

    std::cout << GREEN << "Gandalf welcomes his eager student, " << studentName << ", to the lesson." << RESET << std::endl;
    sleep(1);

    // Begin creating and equipping Materia
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << GREEN << "Gandalf prepares his legendary inventory!" << RESET << std::endl;
    sleep(1);
    ICharacter *gandalf = new Character("Gandalf the White");
    // Create the student character
    ICharacter *student = new Character(studentName);

    AMateria *tmp;

    // Gandalf equips Ice
    std::cout << BLUE << "Gandalf shows " << studentName << " how to create and equip Ice Materia." << RESET << std::endl;
    sleep(1);
    tmp = src->createMateria("ice");
    gandalf->equip(tmp);

    // Gandalf equips another Ice
    std::cout << BLUE << "\"More frost, more power!\" Gandalf equips another Ice Materia." << RESET << std::endl;
    sleep(1);
    tmp = src->createMateria("ice");
    gandalf->equip(tmp);

    // Gandalf equips Cure
    std::cout << MAGENTA << "Next, Gandalf demonstrates the power of healing with Cure Materia." << RESET << std::endl;
    sleep(1);
    tmp = src->createMateria("cure");
    gandalf->equip(tmp);

    // Attempt to equip a fourth Materia
    std::cout << CYAN << "Gandalf equips another Cure Materia to complete the limit." << RESET << std::endl;
    sleep(1);
    tmp = src->createMateria("cure");
    gandalf->equip(tmp);

    // Try equipping beyond the limit
    std::cout << RED_BACKGROUND << "Gandalf: \"Watch this, " << studentName << "! I will try to equip a fifth Materia...\"" << RESET << std::endl;
    sleep(1);
    tmp = src->createMateria("ice");
    gandalf->equip(tmp);
    std::cout << RED << "Gandalf: \"Oops! We cannot equip more than four Materias at once.\"" << RESET << std::endl;
    sleep(2);


    // Gandalf demonstrates Ice
    std::cout << BLUE << "Gandalf turns to " << studentName << " and says, \"Now, witness the power of Ice!\"" << RESET << std::endl;
    sleep(1);
    gandalf->use(0, *student);

    // Student feels the effect
    std::cout << YELLOW << studentName << " shivers as the ice bolt strikes!" << RESET << std::endl;
    sleep(1);

    // Gandalf heals the student
    std::cout << MAGENTA << "Gandalf smiles and says, \"Don't worry, I will heal you now!\"" << RESET << std::endl;
    sleep(1);
    gandalf->use(2, *student);

    std::cout << GREEN << studentName << " feels much better after the healing!" << RESET << std::endl;
    sleep(1);

    // Clean up
    delete student;
    delete gandalf;
    delete src;

    std::cout << YELLOW << BOLD << "[ Gandalf's Magical Lesson is Over! ]" << RESET << std::endl;

    return 0;
}


/*
int main(void)
{
    std::cout << YELLOW << BOLD << "[ Welcome to the Ultimate Materia Showdown! ]" << RESET << std::endl;

    std::cout << CYAN << "Gandalf the White is gathering magical Materia..." << RESET << std::endl;
    {
        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        std::cout << GREEN << "Gandalf prepares his legendary inventory!" << RESET << std::endl;
        ICharacter *gandalf = new Character("Gandalf the White");

        AMateria *tmp;
        std::cout << BLUE << "Gandalf decides to equip some frosty Materia." << RESET << std::endl;
        tmp = src->createMateria("ice");
        gandalf->equip(tmp);

        std::cout << BLUE << "Gandalf thinks: \"More frost is better!\" and equips another ice Materia." << RESET << std::endl;
        tmp = src->createMateria("ice");
        gandalf->equip(tmp);

        std::cout << MAGENTA << "But wait! Healing is important too! Gandalf equips a cure Materia." << RESET << std::endl;
        tmp = src->createMateria("cure");
        gandalf->equip(tmp);

        tmp = src->createMateria("cure");
        gandalf->equip(tmp);
	
        tmp = src->createMateria("cure");
        gandalf->equip(tmp);

        std::cout << RED_BACKGROUND << "Gandalf's inventory is full! Can't equip more Materia!" << RESET << std::endl;

        std::cout << CYAN << "Enter Bob the Brave!" << RESET << std::endl;
        ICharacter *bob = new Character("Bob the Brave");

        std::cout << BLUE << "Gandalf uses his icy powers against Bob!" << RESET << std::endl;
        gandalf->use(0, *bob);

        std::cout << MAGENTA << "Bob shivers, but Gandalf decides to be merciful and follows up with healing magic!" << RESET << std::endl;
        gandalf->use(2, *bob);

        std::cout << YELLOW << "Gandalf decides to unequip some of his Materia to prepare for the next battle..." << RESET << std::endl;
        gandalf->unequip(0);
        gandalf->unequip(1);

        std::cout << GREEN << "Gandalf, proud of his magical arsenal, leaves the arena." << RESET << std::endl;

        delete bob;
        delete gandalf;
        delete src;
    }

    std::cout << YELLOW << BOLD << "[ The Showdown is Over! ]" << RESET << std::endl;

    return 0;
}
*/
/*
int	main() {
	std::cout << "Hello Wally " << std::endl;
	return 0;
}*/
/*
int main(void)
{
std::cout << BOLD << BLUE << "\n[ Welcome to the Ultimate Materia Showdown! ]" << RESET << std::endl;

    // Wally's Magical Arsenal
    std::cout << YELLOW << "Wally the Wise is gathering magical Materia..." << RESET << std::endl;
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    // Wally enters the arena
    ICharacter *wally = new Character("Wally");

    // Equipping Materia
    std::cout << MAGENTA << "Wally decides to equip some frosty Materia." << RESET << std::endl;
    AMateria *tmp;
    tmp = src->createMateria("ice");
    wally->equip(tmp);

    std::cout << MAGENTA << "Wally thinks: \"More frost is better!\" and equips another ice Materia." << RESET << std::endl;
    tmp = src->createMateria("ice");
    wally->equip(tmp);

    std::cout << GREEN << "But wait! Healing is important too! Wally equips a cure Materia." << RESET << std::endl;
    tmp = src->createMateria("cure");
    wally->equip(tmp);
    // Wally tries to equip a fourth Materia
    std::cout << RED_BACKGROUND << BOLD_RED << "Wally's inventory is full! Can't equip more!" << RESET << std::endl;

    // Meet Bob the Brave!
    ICharacter *bob = new Character("Bob");

    // Battle!
    std::cout << CYAN << "Wally uses his icy powers against Bob!" << RESET << std::endl;
    wally->use(0, *bob); // Uses ice
    std::cout << CYAN << "Bob shivers, but he’s still standing!" << RESET << std::endl;

    std::cout << GREEN << "Wally follows up with some healing magic to patch Bob up!" << RESET << std::endl;
    wally->use(2, *bob); // Uses cure

    // Unequip one item
    std::cout << YELLOW << "Wally decides to unequip some of his Materia..." << RESET << std::endl;
    wally->unequip(1); // Unequip second Materia

    std::cout << BLUE << "Wally, proud of his magical arsenal, leaves the arena." << RESET << std::endl;
    // Cleanup
    delete bob;
    delete wally;
    delete src;

    std::cout << BOLD << GREEN << "\n[ The Showdown is Over! ]" << RESET << std::endl;
    return 0;
}
int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}
*/
