/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Olifant.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:36:31 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/04 11:15:32 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Olifant.hpp"

Olifant::Olifant(void) {
	this->_type = "Olifant";
	std::cout << this->_type << " 🐘 created with default constructor" << std::endl;
}

Olifant::Olifant(const Olifant& copy) : WrongAnimal(copy) {
	std::cout << this->_type  << " 🐘 created with copy constructor" << std::endl;
	*this = copy;
}

Olifant& Olifant::operator=(const Olifant& copy) {
	if (this != &copy) {
		this->_type = copy._type;
	}
	std::cout  << "Olifant 🐘 assignement operator called" << std::endl;
	return *this;
}

Olifant::~Olifant(void) {
	std::cout << "Olifant deconstructor called  🐘" << std::endl;
}

void Olifant::makeSound(void) const {
	std::cout << " 🐧 Miiaaooo!! 🐘" << std::endl;
}
//sed -i s/Cat/Elephant/g Cat2.cpp
//for dir in ex*/; do (cd "$dir" && make); done
// for dir in ex*/; do (cd "$dir" && make fclean); done

