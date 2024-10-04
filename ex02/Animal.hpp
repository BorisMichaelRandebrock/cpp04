/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:25:56 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/04 13:27:12 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

#define RESET   "\033[0m"
#define BOLD     "\033[1m"
#define RED_BACKGROUND "\033[41m"
#define RED     "\033[31m"
#define BOLD_RED "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[34m"

#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"


class Animal {
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		virtual ~Animal(void);

		std::string		getType(void) const;
		void			setType(const std::string type);

		virtual void	makeSound(void) const = 0;
};
#endif
