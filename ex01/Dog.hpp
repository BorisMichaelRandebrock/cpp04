/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:12:18 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 18:04:31 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
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
