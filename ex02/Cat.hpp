/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:30:52 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/04 16:30:46 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal {
	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(const Cat& copy);
		~Cat(void);
		Cat&	operator=(const Cat& copy);
		void	makeSound(void) const;
		Brain& getBrain(void);
		void setBrain(const Brain& brain);
};

#endif
