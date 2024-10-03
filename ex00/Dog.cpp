/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:20:24 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 14:28:41 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)/* : _type("Dog") */{
	this->_type = "Dog";
	std::cout << _type << " created with default constructor." << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) {
	std::cout << _type << "  created with copy contructor"  << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
	if  (this != &copy) {
		this->_type = copy._type;
	}
	std::cout << "Dog assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "🐶  Woof,  woof.. 🦮" <<  std::endl;
}

