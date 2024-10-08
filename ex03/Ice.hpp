/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:51:10 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/08 14:38:07 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : virtual public AMateria {

	public:
		Ice(void);
	//	Ice(const std::string& type);
		Ice(const Ice& copy);
		Ice& operator=(const Ice& copy);
		~Ice();

		AMateria*		clone() const;
		virtual void	use(ICharacter& target);
};

#endif
