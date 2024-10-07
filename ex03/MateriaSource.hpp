/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:44:22 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/07 18:46:25 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriasource.hpp"

class MateriaSource {
	private:
		AMateria	*_inventory[INV];
		int			_idx;

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& copy);
		MateriaSource &operator(const MateriaSource& copy);
		~MateriaSource(void);

		virtual void	learnMateria(AMateria *m);
		virtual	AMateria	*createMaterial(const std::string &type);
};

#endif
