/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:12:18 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/04 16:31:32 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal {
	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(const Dog& copy);
		~Dog(void);
		Dog& operator=(const Dog& copy);
		void makeSound(void) const;
		Brain& getBrain(void);
		void setBrain(const Brain& brain);
};

#endif
