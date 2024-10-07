/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:41:40 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/07 17:49:46 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
# define CHARACTER

#include "ICharacter.hpp"
#include "AMateria.hpp"

//#define INV = 4; defined iin AMateri.hpp

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _inventory[INV];


	public:
		Character(void);
		Character(const std::string& name);
		Character(const Character& copy);
		Character& operator=(const Character& copy);
		~Character();

		const std::string& getName(void) const;
		void	unequip(int idx);
		void	equip(Amateria* m);
		void	use(int idx, ICharacter&target);
	/*	virtual ~Character() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, Character& target) = 0;
*/
};

#endif
