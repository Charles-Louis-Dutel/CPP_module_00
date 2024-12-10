/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:29:17 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/10 17:15:52 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <string>
#include <iostream>

int main (void)
{
	PhoneBook	directory;
	std::string	command;

	while (true)
	{
		std::cout << "Please enter a command: ";
		if (!std::getline(std::cin, command))
			break;
		if (command.compare("ADD") == 0)
			directory.add_contact();
		else if (command.compare("SEARCH") == 0)
			directory.search_contact();
		else if (command.compare("EXIT") == 0)
			break;
		std::cout << std::endl;
	}
	return (0);
}
