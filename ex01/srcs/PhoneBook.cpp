/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:29:43 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/10 17:23:25 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook constructor called" << std::endl;
	this->_index = 0;
	this->full = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructor called" << std::endl;
}

void	PhoneBook::add_contact(void)
{
	std::string	answer;

	if (this->full == 0)
	{
		this->_contact_list[this->_index].set_contact();
		this->_index++;
		if (this->_index == 8)
			this->full = 1;
	}
	else
	{
		std::cout << "Your phone book is full, if you want to add an other contact, your first contact will be erased." << std::endl;
		while (1)
		{
			std::cout << "Do you want to continue (yes/no) : ";
			if (!std::getline(std::cin, answer))
				break;
			if (answer.compare("yes") == 0)
			{
				for (int i = 0; i < 7; i++)
					this->_contact_list[i] = this->_contact_list[i + 1];
				this->_contact_list[7].set_contact();
				break ;
			}
			else if (answer.compare("no") == 0)
				break ;
		}
	}
}

void	PhoneBook::search_contact(void) const
{
	int			index = 0;
	std::string	answer;

	std::cout << "Your contact list :" << std::endl;
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		_contact_list[i].get_contact();
	}
	std::cout << std::endl;
	std::cout << "Please, enter the index of the contact to display : ";
	while (true)
	{
		if (!std::getline(std::cin, answer))
			break;
		std::stringstream i(answer);
		i >> index;
		if (index < 1 || index > 8)
			std::cout << "Wrong entry, please enter a valid index : ";
		else
		{
			std::cout << std::endl;
			_contact_list[index - 1].Print_contact();
			break ;
		}
	}
}
