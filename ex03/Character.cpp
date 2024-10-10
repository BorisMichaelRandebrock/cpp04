/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:38:44 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/10 14:26:39 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _idx(0) {
	for (int i = 0; i < INV; i++)
		_inventory[i] = NULL;
	std::cout << "Default character constructor called" << std::endl;
}

Character::Character(const std::string& name) : /*_idx(0),*/ _name(name), _idx(0) {
	for (int i = 0; i < INV; i++)
		_inventory[i] = NULL;
	std::cout << "Character constructor called with name " << name <<  std::endl;
}

Character::Character(const Character& copy) {
	*this = copy;
	std::cout << "Character copy constructor called" <<  std::endl;
}

Character& Character::operator=(const Character& copy) {
	std::cout << "Assignement oprator called" <<  std::endl;
	if (this != &copy) {
		this->_idx = copy._idx;
		this->_name = copy._name;
		for (int i = 0; i < INV; i++) {
			if (copy._inventory[i])
				this->_inventory[i] = copy._inventory[i];
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character(void) {
	for (int i = 0; i < INV; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	std::cout << "Character witness called & destroyed" << std::endl;
}

const std::string& Character::getName(void) const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	int i;
	for (i = 0; i < INV; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m->clone();
			std::cout << m->getType() << " has been equipped in position " << i << std::endl;
			break;
		}
	}
	if (i == INV)
		std::cout << m->getType() << " cannot be equipped, Inventory is full!" << std::endl;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx >= INV)
		std::cout << "The materia " << idx << "is not in inventory" << std::endl;
	if (this->_inventory[idx] != NULL) 
		this->_inventory[idx] = NULL;
	else
		std::cout << "The inventory postion " << idx << " is empty, you can noy drop anything!" << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= INV) {
		std::cout << "You have nothing equipped in the inventory position " << idx << std::endl;
		return;
	}
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	else
		std::cout << "Inventory in position " << idx << " is empty... nothing  there to be used.." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const ICharacter& character) {
    os << character.getName();
    return os;
}
