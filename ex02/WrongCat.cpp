/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:38:12 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 16:22:28 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->_type = "WrongCat";
	std::cout << this->_type << " created with default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) {
	std::cout << this->_type  << " created with copy constructor" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
	if (this != &copy) {
		this->_type = copy._type;
	}
	std::cout  << "WrongCat assignement operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat deconstructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << " 🐋 Wufffff  🐉" << std::endl;
}

