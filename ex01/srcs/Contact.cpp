/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:29:32 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/27 13:07:09 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
	this->_field[0] = "first name";
	this->_field[1] = "last name";
	this->_field[2] = "nickname";
	this->_field[3] = "phone number";
	this->_field[4] = "darkest secret";
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
}

void	Contact::Print_contact(void) const
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->_field[i] << " : ";
		std::cout << this->_contact_infos[i] << std::endl;
	}
}

void	Contact::get_contact(void) const
{
	int		len = 0;
	char	str[10];

	for (int i = 0; i < 3; i++)
	{
		len = this->_contact_infos[i].length();
		if (len > 10)
		{
			this->_contact_infos[i].copy(str, 9, 0);
			std::cout << str << ".";
		}
		else
		{
			std::cout << std::setw(10);
			std::cout << this->_contact_infos[i];
		}
		std::cout << "|";
	}
	std::cout << std::endl;
}

void	Contact::set_contact(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter your " << this->_field[i] << " : ";
		std::getline(std::cin, this->_contact_infos[i]);
		if (this->_contact_infos[i].compare("") == 0)
		{
			std::cout << "Field can't be empty, enter infos again please" << std::endl;
			i--;
		}
	}
}
