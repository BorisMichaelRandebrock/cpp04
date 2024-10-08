/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:10:17 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/08 14:45:20 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <iostream>
#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
//	AMateria::_type = "ice";
	std::cout << "Default constructor called for the materia " << this->_type << std::endl;
}

Ice::Ice(const Ice& copy) {
	*this = copy;
	std::cout << "Copy constructor called for materia " << &copy._type << std::endl;
}

Ice &Ice::operator=(const Ice& copy) {
	if (this != &copy) {
		this->_type = copy._type;
	}
	std::cout << "Assignement operator called for Materia " << this->_type << std::endl;
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice melted with hot fire" << std::endl;
}

AMateria	*Ice::clone(void) const {
	Ice *copy = new Ice();
	return copy;
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}
