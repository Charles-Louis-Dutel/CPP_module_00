/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:29:32 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/10 17:16:45 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include <iostream>

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
		if (!std::getline(std::cin, this->_contact_infos[i]))
				break;
		if (this->_contact_infos[i].compare("") == 0)
		{
			std::cout << "Field can't be empty, enter infos again please" << std::endl;
			i--;
		}
		else
		{
			if (i == 3)
			{
				for (int k = 0; k < (int)_contact_infos[i].length(); k++)
				{
					if (!(this->_contact_infos[i][k] >= 48 && this->_contact_infos[i][k] <= 57))
					{
						std::cout << "Phone number should only have number" << std::endl;
						i--;
						break;
					}
				}
			}
			for (int j = 0; j < (int)_contact_infos[i].length(); j++)
			{
				if ((this->_contact_infos[i][j] >= 0 && this->_contact_infos[i][j] <= 31) || this->_contact_infos[i].compare("") == 0)
				{
					std::cout << "Field can't be empty, enter infos again please" << std::endl;
					i--;
					break;
				}
			}
		}
	}
}
