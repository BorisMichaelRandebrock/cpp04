/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:36:31 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 15:00:52 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Elephant.hpp"

Elephant::Elephant(void)/* : public Animal(), _type("Elephant") */{
	this->_type = "Elephant";
	std::cout << this->_type << " created with default constructor" << std::endl;
}

Elephant::Elephant(const Elephant& copy) : Animal(copy) {
	std::cout << this->_type  << " created with copy constructor" << std::endl;
	*this = copy;
}

Elephant& Elephant::operator=(const Elephant& copy) {
	if (this != &copy) {
		this->_type = copy._type;
	}
	std::cout  << "Elephant assignement operator called" << std::endl;
	return *this;
}

Elephant::~Elephant(void) {
	std::cout << "Elephant deconstructor called" << std::endl;
}

void Elephant::makeSound(void) const {
	std::cout << "😸  Miiaaooo!! 🐈" << std::endl;
}
//sed -i s/Cat/Elephant/g Cat2.cpp
//for dir in ex*/; do (cd "$dir" && make); done
// for dir in ex*/; do (cd "$dir" && make fclean); done

