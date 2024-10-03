/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:26:25 by brandebr          #+#    #+#             */
/*   Updated: 2024/10/03 18:12:13 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	protected:
		std::string _ideas[100];

	public:
		Brain(void);
		Brain(const Brain& copy);
		Brain &operator=(const Brain&copy);
		~Brain(void);

		const std::string&	getIdeas(const int& i) const;
		void				setIdeas(const std::string& idea, const int& i);
};

#endif
