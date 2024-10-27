/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:29:13 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/27 13:25:18 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Lib.hpp"

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	Print_contact(void) const;
		void	get_contact(void) const;
		void	set_contact(void);

	private:
		std::string	_contact_infos[5];
		std::string _field[5];
};

#endif
