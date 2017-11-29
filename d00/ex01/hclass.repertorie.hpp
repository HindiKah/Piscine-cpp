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

using namespace std;

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
	string street;
	int postal_code;
	string city;

	Adress(int n, string s, int p_c, string c);
	~Adress(void);

	void	print(void) const;
};

class Repertorie
{
	public :
		int		init;
		string	firstname;
		string	lastname;
		string	nickname;
		string	login;
		string	email_adress;
		string	underwear_color;
		string	darkest_secret;
		string	phone_number;
		string	birthday;
		string	postal_adress;
		string	favourite_meal;

		Repertorie(void);
		~Repertorie(void);

		void	print_full(void) const;
		void	print_small(void) const;
		void	add_contact(int index);
};

#endif
