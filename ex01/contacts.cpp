/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:22:49 by yel-bouk          #+#    #+#             */
/*   Updated: 2025/07/02 14:09:42 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::set(std::string n, std::string ln, std::string nick, std::string phone, std::string secret) {
    name = n;
    lastName = ln;
    nickname = nick;
    phoneNumber = phone;
    darkestSecret = secret;
}

std::string Contact::getName() const { return name; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getPhoneNumber() const { return phoneNumber; }
std::string Contact::getSecret() const { return darkestSecret; }
