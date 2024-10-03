/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:25:56 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 14:27:59 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string	_type;

	public:
		Animal(void);
//		Animal(const std::string &type);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		virtual ~Animal(void);

		std::string		getType(void) const;
		void			setType(const std::string type);

		virtual void	makeSound(void) const;
};
#endif
