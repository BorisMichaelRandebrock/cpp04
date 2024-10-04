/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Olifant.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:30:52 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/04 11:10:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class Olifant : public WrongAnimal {
	public:
		Olifant(void);
		Olifant(const Olifant& copy);
		~Olifant(void);
		Olifant&	operator=(const Olifant& copy);
		void	makeSound(void) const;
};
