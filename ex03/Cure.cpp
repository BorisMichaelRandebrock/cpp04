/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:10:17 by brandebr          #+#    #+#             */
/*   Updated: 2025/03/13 16:27:03 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	std::cout << "Default constructor called for the materia " << this->_type << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy) {
	//*this = copy;
	std::cout << "Copy constructor called for materia " << copy.getType() << std::endl;
}

Cure &Cure::operator=(const Cure& copy) {
	if (this != &copy) {
		this->_type = copy._type;
	}
	std::cout << "Assignement operator called for Materia " << this->_type << std::endl;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure gone bad,.. therefore being incinerated before causing any damage.." << std::endl;
}

AMateria	*Cure::clone(void) const {
	Cure *copy = new Cure();
	return copy;
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target << "'s wounds *" << std::endl;
}
