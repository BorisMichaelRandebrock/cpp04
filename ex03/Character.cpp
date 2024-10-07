/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:38:44 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/07 14:54:50 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _idx(0) {
	std::cout << "Default character constructor called" << std::endl;
}

Character::Character(const std::string& name) : _idx(0), _name(name) {
	std::cout << "Character constructor called with name" << name <<  std::endl;
}

Character::Character(const Character& copy) {
	*this = copy;
	std::cout << "Character copy constructor called" <<  std::endl;
}

Character& Character::operator=(const std::string& name) {
	std::cout << "Assignement oprator called" << name <<  std::endl;
	if (this != &copy) {
		this->idx = copy_idx;
		this->_name = copy.name;
	}
	return *this;
}
