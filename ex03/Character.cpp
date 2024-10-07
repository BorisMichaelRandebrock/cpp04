/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:38:44 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/07 16:55:26 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _idx(0) {
	for (int i = 0; i < INV; i++)
		_inventory[i] = nullptr;
	std::cout << "Default character constructor called" << std::endl;
}

Character::Character(const std::string& name) : _idx(0), _name(name) {
	for (int i = 0; i < INV; i++)
		_inventory[i] = nullptr;
	std::cout << "Character constructor called with name" << name <<  std::endl;
}

Character::Character(const Character& copy) {
	*this = copy;
	std::cout << "Character copy constructor called" <<  std::endl;
}

Character& Character::operator=(const std::string& name) {
	std::cout << "Assignement oprator called" <<  std::endl;
	if (this != &copy) {
		this->idx = copy_idx;
		this->_name = copy.name;
		for (int i = 0; i < INV; i++) {
			if (copy_inventory[i])
				this->_inventory[i] = copy._inventory;
			else
				this->_inventory[i] = nullptr;
		}
	}
	return *this;
}

Character::~Character(void) {
	for (int i = 0; i < INV; i++) {
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
	}
	std::cout << "Character witness called & destroyed" << std::endl;
}
