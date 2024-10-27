/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:28:35 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/27 14:49:03 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add_contact(void);
		void	search_contact(void) const;

	private:
		Contact _contact_list[8];
		int		_index;
		int		full;
};

#endif
