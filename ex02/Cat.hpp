/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:30:52 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 18:04:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
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
