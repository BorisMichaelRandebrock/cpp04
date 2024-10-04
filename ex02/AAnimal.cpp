/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:32:03 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/04 16:28:31 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal") {
	std::cout << "Animal default constructor called " << std::endl;
}

/*Animal::Animal(const std::string &type) : _type(type) {
	std::cout << "Animal constructor called with type " << this->_type << std::endl;
}*/

AAnimal::AAnimal(const AAnimal &copy) : _type(copy._type) {
	std::cout << "Animal copy constructor called with " << this->_type << std::endl;
	*this = copy;
}

AAnimal& AAnimal::operator=(const AAnimal &copy) {
	if (this != &copy) {
		_type = copy._type;
	}
	std::cout << "Assignement operator called for " << this->_type << std::endl;
	return *this;
}

AAnimal::~AAnimal(void) {
	std::cout << "Animal deconstructor called on " << this->_type << std::endl;
}

std::string AAnimal::getType(void) const {
	return this->_type;
}

void AAnimal::setType(std::string type) {
	this->_type = type;
}

void AAnimal::makeSound(void) const {
	std::cout << this->_type << " says: " << std::endl;
}
