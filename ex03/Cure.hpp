/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:51:10 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/08 17:28:31 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
	//	Cure(const std::string& type);
		Cure(const Cure& copy);
		Cure& operator=(const Cure& copy);
		~Cure();

		AMateria*		clone() const;
		virtual void	use(ICharacter& target);
};

#endif
