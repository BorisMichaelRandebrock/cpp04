/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:32:03 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 14:36:36 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called " << std::endl;
}

/*WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
	std::cout << "WrongAnimal constructor called with type " << this->_type << std::endl;
}*/

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type) {
	std::cout << "WrongAnimal copy constructor called with " << this->_type << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy) {
	if (this != &copy) {
		_type = copy._type;
	}
	std::cout << "Assignement operator called for " << this->_type << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called on " << this->_type << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->_type;
}

void WrongAnimal::setType(std::string type) {
	this->_type = type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << this->_type << " says: " << std::endl;
}
