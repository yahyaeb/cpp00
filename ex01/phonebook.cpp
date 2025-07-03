/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:22:04 by yel-bouk          #+#    #+#             */
/*   Updated: 2025/07/02 14:06:49 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::print_contact(const std::string& variable)
{
	if (variable.length() > 10)
		std::cout << variable.substr(0, 9) + ".";
	else
		std::cout << std::string(10 - variable.length(), ' ') + variable;
}

void PhoneBook::print(int count)
{
	std::cout << "|-----------------------------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name| Nickname | Phone No.| Darkest .|" << std::endl;
	std::cout << "|----------|----------|----------|----------|----------|----------|" << std::endl;
	for (int j = 0; j < count; j++)
	{
		std::cout << "|";
		char c = (j+1) + '0';
		std::string index_str(1, c);
		print_contact(index_str);
		std::cout << "|";
		print_contact(contacts[j].getName());
		std::cout << "|";
		print_contact(contacts[j].getLastName());
		std::cout << "|";
		print_contact(contacts[j].getNickname());
		std::cout << "|";
		print_contact(contacts[j].getPhoneNumber());
		std::cout << "|";
		print_contact(contacts[j].getSecret());
		std::cout << "|\n";
	}
	std::cout << "|-----------------------------------------------------------------|" << std::endl;
}

void PhoneBook::print_index_contact(int index)
{
	std::cout << "|-----------------------------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name| Nickname | Phone No.| Darkest .|" << std::endl;
	std::cout << "|----------|----------|----------|----------|----------|----------|" << std::endl;
	
	std::cout << "|";
	char c = (index + 1) + '0';
	std::string index_str(1, c);
	print_contact(index_str);
	std::cout << "|";
	print_contact(contacts[index].getName());
	std::cout << "|";
	print_contact(contacts[index].getLastName());
	std::cout << "|";
	print_contact(contacts[index].getNickname());
	std::cout << "|";
	print_contact(contacts[index].getPhoneNumber());
	std::cout << "|";
	print_contact(contacts[index].getSecret());
	std::cout << "|\n";

	std::cout << "|-----------------------------------------------------------------|" << std::endl;
}
