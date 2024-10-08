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

/*
int	main() {
	std::cout << "Hello Wally " << std::endl;
	return 0;
}*/

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

/*    // Wally tries to equip a fourth Materia
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
*/
    // Cleanup
//    delete bob;
    delete wally;
    delete src;

    std::cout << BOLD << GREEN << "\n[ The Showdown is Over! ]" << RESET << std::endl;
    return 0;
}
