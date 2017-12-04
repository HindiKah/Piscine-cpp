/*
 * =====================================================================================
 *
 *       Filename:  class.repertorie.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  28.11.2017 23:03:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "hclass.repertorie.hpp"
#include <string>
#include <iomanip>


Repertorie::Repertorie(void) : init(-1)
{
}

Repertorie::~Repertorie(void)
{
}

void		Repertorie::add_contact(int index)
{
	std::cout << "Enter firstname: ";
	std::getline (std::cin, this->firstname);
	std::getline (std::cin, this->firstname);
	std::cout << "Enter lastname: ";
	std::getline (std::cin, this->lastname);
	std::cout << "Enter nickname: ";
	std::getline (std::cin, this->nickname);
	std::cout << "Enter login: ";
	std::getline (std::cin, this->login);
	std::cout << "Enter postal address: ";
	std::getline (std::cin, this->postal_adress);
	std::cout << "Enter email: ";
	std::getline (std::cin, this->email_adress);
	std::cout << "Enter phone number: ";
	std::getline (std::cin, this->phone_number);
	std::cout << "Enter birthday: ";
	std::getline (std::cin, this->birthday);
	std::cout << "Enter favorite meal: ";
	std::getline (std::cin, this->favourite_meal);
	std::cout << "Enter underwear color: ";
	std::getline (std::cin, this->underwear_color);
	std::cout << "Enter darkest secret: ";
	std::getline (std::cin, this->darkest_secret);
	this->init = index;
}

void		resize(const std::string word)
{
	char	tmp[11];
	int		len = word.size();

	word.copy(tmp, 10);
	if (len > 10)
		tmp[9] = '.';
	tmp[10] = '\0';
	std::cout << std::setfill(' ') << std::setw(10) << tmp;
}

void		print_one(std::string param)
{
	resize(param);
	std::cout << "|";
}

void		Repertorie::print_full(void) const
{
	print_one(std::to_string(this->init));
	print_one(this->firstname);
	print_one(this->lastname);
	print_one(this->nickname);
	print_one(this->login);
	print_one(this->email_adress);
	print_one(this->favourite_meal);
	print_one(this->underwear_color);
	print_one(this->darkest_secret);
	print_one(this->phone_number);
	print_one(this->birthday);
	print_one(this->postal_adress);
	std::cout << std::endl;
}

void		Repertorie::print_small(void) const
{
	print_one(std::to_string(this->init));
	print_one(this->firstname);
	print_one(this->lastname);
	print_one(this->nickname);
}
