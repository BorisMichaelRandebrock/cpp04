/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:41:40 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/08 13:40:53 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
# define CHARACTER

#include "ICharacter.hpp"
#include "AMateria.hpp"

//#define INV 4;// defined in AMateria.hpp

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _inventory[INV];
		int	_idx;

	public:
		Character(void);
		Character(const std::string& name);
		Character(const Character& copy);
		Character& operator=(const Character& copy);
		~Character();

		const	std::string& getName(void) const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
