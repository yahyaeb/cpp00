/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:05:52 by yel-bouk          #+#    #+#             */
/*   Updated: 2025/07/02 13:31:06 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	PhoneBook MyPhoneBook;
	std::string command;
	std::cout << "         Welcome to 'My Awesome PhoneBook'\n";
	std::cout << "This is a phonebook software, where you can save up to 8 contacts\n";
	std::cout << "1- Type ADD to save a new contact\n" << "2- Type SEARCH to display a contact\n" << "3- Type EXIT to exit the phonebook\n" << std::endl;
	int contact_count = 0;
	int insert_index = 0;
	while(1)
	{
		std::cout << "type your command:";
		if (!(std::cin >> command)) {
			std::cout << "\nExiting program.\n";
			break;
		}
		if(command == "ADD")
		{
			std::string name, lastName, nickname, phoneNumber, darkestSecret;

			std::cout << "Contact name: ";
			std::cin.ignore();
			std::getline(std::cin, name);
			
			std::cout << "Contact last name: ";
			std::getline(std::cin, lastName);

			std::cout << "Contact nickname: ";
			std::getline(std::cin, nickname);

			std::cout << "Contact phone number: ";
			std::getline(std::cin, phoneNumber);

			std::cout << "Contact darkest secret: ";
			std::getline(std::cin, darkestSecret);

			if (name.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty()) {
				std::cout << "All fields must be filled. Contact not saved.\n\n";
				continue;
			}

			MyPhoneBook.contacts[insert_index].set(name, lastName, nickname, phoneNumber, darkestSecret);


			std::cout << "Contact saved!\n\n";

			if(contact_count < 8) 
				contact_count++;

			insert_index = (insert_index + 1) % 8;
		}
		else if(command == "EXIT")
			return 0;
		else if (command == "SEARCH")
		{
			if (contact_count > 0)
			{
				MyPhoneBook.print(contact_count);
			}
			std::cout << "Enter Contact Index: (1 to " << contact_count << "): ";
			int ind;
			std::cin >> ind;
			ind -= 1;
			if(std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				std::cout << "Invalid input. Please enter a number.\n";
				continue;
			}
			if (ind < 0 || ind >= contact_count) {
				std::cout << "No contacts to display.\n";
				continue;
			}
			else
				MyPhoneBook.print_index_contact(ind);
		}
		else
			std::cout << "invalid command. Please enter, ADD, SEARCH or EXIT\n";
	}
	return 0;
}