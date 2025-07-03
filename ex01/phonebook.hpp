/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:24:15 by yel-bouk          #+#    #+#             */
/*   Updated: 2025/07/02 14:09:34 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iostream>


class Contact {
private:
    std::string name;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact(); // Constructor
    ~Contact(); // Destructor

    void set(std::string n, std::string ln, std::string nick, std::string phone, std::string secret);
    std::string getName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getSecret() const;
};


class PhoneBook
{	
	public:
	Contact contacts[8];

	void print_contact(const std::string& variable);
	void print(int count);
	void print_index_contact(int index);

};