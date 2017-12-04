/*
 * =====================================================================================
 *
 *       Filename:  hclass.repertorie.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  28.11.2017 23:06:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef HCLASS_REPERTORIE_hpp
#define HCLASS_REPERTORIE_hpp

#include <iostream>


class Birthday
{
	public:
	int day;
	int month;
	int year;

	Birthday(int d, int m, int y);
	~Birthday(void);

	void	print(void) const;
};

class Adress
{
	public:
	int number;
	std::string street;
	int postal_code;
	std::string city;

	Adress(int n, std::string s, int p_c, std::string c);
	~Adress(void);

	void	print(void) const;
};

class Repertorie
{
	public :
		int		init;
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	login;
		std::string	email_adress;
		std::string	underwear_color;
		std::string	darkest_secret;
		std::string	phone_number;
		std::string	birthday;
		std::string	postal_adress;
		std::string	favourite_meal;

		Repertorie(void);
		~Repertorie(void);

		void	print_full(void) const;
		void	print_small(void) const;
		void	add_contact(int index);
};

#endif
