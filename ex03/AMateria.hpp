/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:11:32 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/07 13:23:21 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
# define AMATERIA

#include <iostream>

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

class AMateria {
	protected:
		std::string _type;

	public:
		AMateria(void);
		AMateria(const std::string& type);
		AMateria(const AMateria& copy);
		AMateria& operator=(const AMateria& copy);
		~AMateria(void);

		const std::string&	getType(void);

		virtual AMateria*	clone(void) const = 0;
	//	virtual void		use(ICharacter& target);
};

#endif
