/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:10:17 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/08 14:45:20 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <iostream>
#include "Cure.hpp"

Cure::Cure(void) : AMateria("ice") {
//	AMateria::_type = "ice";
	std::cout << "Default constructor called for the materia " << this->_type << std::endl;
}

Cure::Cure(const Cure& copy) {
	*this = copy;
	std::cout << "Copy constructor called for materia " << &copy._type << std::endl;
}

Cure &Cure::operator=(const Cure& copy) {
	if (this != &copy) {
		this->_type = copy._type;
	}
	std::cout << "Assignement operator called for Materia " << this->_type << std::endl;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure melted with hot fire" << std::endl;
}

AMateria	*Cure::clone(void) const {
	Cure *copy = new Cure();
	return copy;
}

void	Cure::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}
