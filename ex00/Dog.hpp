/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:12:18 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 14:22:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog(void);
		Dog(const Dog& copy);
		~Dog(void);
		Dog& operator=(const Dog& copy);
		void makeSound(void) const;
};

#endif
