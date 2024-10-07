/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:20:01 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/07 13:38:00 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	std::cout << "Materia default constructor has been called" << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type) {
	std::cout << "Materia constructor has been called with type " << _type << std::endl;
}

AMateria::AMateria(const AMateria& copy) {
	*this = copy;
	std::cout << "Copy constructor called with type " << _type << std::endl;  
}

AMateria& AMateria::operator=(const AMateria& copy) {
	if (this != &copy) {
		_type = copy._type;
	}
	std::cout << "Assignement operator called for "  << this->_type << std::endl;
	return *this;
}

AMateria::~AMateria(void) {
	std::cout << "The materia " << this->_type << " has been destroyed" << std::endl;
}

const std::string& AMateria::getType(void) {
	return _type;
}

//AMateria AMateria::*clone(void) {}

void	AMateria::use(ICharacter& target) {
}


