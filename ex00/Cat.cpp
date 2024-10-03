/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:36:31 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 16:19:16 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->_type = "Cat";
	std::cout << this->_type << " created with default constructor" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy) {
	std::cout << this->_type  << " created with copy constructor" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy) {
	if (this != &copy) {
		this->_type = copy._type;
	}
	std::cout  << "Cat assignement operator called" << std::endl;
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat deconstructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "😸  Miiaaooo!! 🐈" << std::endl;
}

