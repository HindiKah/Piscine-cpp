/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  28.11.2017 23:59:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "hclass.repertorie.hpp"


void	display_help(void)
{
	std::cout << "Error: not a valid command (ADD/SEARSH/EXIT)" << std::endl;
}

/*
   void	add_this_contact(Repertorie contact)
   {
   std::string buff;
   std::cout << "Pleas enter:\nthe contact firstname: ";
   cin >> buff;
   if (buff.size() > 30)
   {
   cout << "Error: input too long" << endl;
   add_this_contact(contact);
   }
   contact.firstname = buff;
   std::cout << "Enter the contact lastname: ";
   cin >> buff;
   if (buff.size() > 30)
   {
   cout << "Error: input too long" << endl;
   add_this_contact(contact);
   }
   contact.lastname = buff;
   std::cout << "Enter the contact nickname: " << endl;
   cin >> buff;
   if (buff.size() > 30)
   {
   cout << "Error: input too long: " << endl;
   add_this_contact(contact);
   }
   contact.nickname = buff;
   std::cout << "Enter the contact login: " << endl;
   cin >> buff;
   if (buff.size() > 30)
   {
   cout << "Error: input too long: " << endl;
   add_this_contact(contact);
   }
   contact.login = buff;
   std::cout << "Enter the contact favourite meal: " << endl;
   cin >> buff;
   if (buff.size() > 30)
   {
   cout << "Error: input too long: " << endl;
   add_this_contact(contact);
   }
   contact.favourite_meal = buff;
   std::cout << "Enter the contact email adress: ";
   cin >> buff;
   if (buff.size() > 30)
   {
   cout << "Error: input too long" << endl;
   add_this_contact(contact);
   }
   contact.email_adress = buff;
   std::cout << "\nEnter the contact underwear color: ";
   cin >> buff;
   if (buff.size() > 30)
   {
   cout << "Error: input too long" << endl;
   add_this_contact(contact);
   }
   contact.underwear_color = buff;
   std::cout << "\nEnter the contact darkest secret: ";
   cin >> buff;
   if (buff.size() > 30)
   {
   cout << "\nError: input too long" << endl;
   add_this_contact(contact);
   }
   contact.darkest_secret = buff;
   std::cout << "\nEnter the contact phone number: ";
   cin >> buff;
   if (buff.size() > 30)
{
	cout << "\nError: input too long" << endl;
	add_this_contact(contact);
}
contact.phone_number = buff;
std::cout << "\nEnter the contact birthday: ";
cin >> buff;
if (buff.size() > 30)
{
	cout << "Error: input too long" << endl;
	add_this_contact(contact);
}
contact.birthday = buff;
std::cout << "\nEnter the contact postal adress: ";
cin >> buff;
if (buff.size() > 30)
{
	cout << "Error: input too long" << endl;
	add_this_contact(contact);
}
contact.postal_adress = buff;
}
*/

void	add_contact(Repertorie *my_repertorie)
{
	int i = 0;
	while (my_repertorie[i].init >= 0)
		i++;
	if (i == 8)
	{
		std::cout << "The repertorie is full" << std::endl;
		return;
	}
	my_repertorie[i].add_contact(i);
}

int cin_int(void)
{
	int n;
	std::cin >> n;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Not a valid number. Please reenter: ";
		std::cin >> n;
	}
	return n;
}

void	searsh_contact(Repertorie *my_repertorie)
{
	using std::cout;
	using std::endl;
	int i = 0;
	int choose = -1;
	while (my_repertorie[i].init >= 0)
	{
		my_repertorie[i].print_small();
		cout << endl;
		i++;
	}
	if (i == 0 && my_repertorie[i].init < 0)
	{
		cout << "No contact on list" << endl;
		return;
	}
	cout << "Please enter the index of the contact you want to display: ";
	choose = cin_int();
	if (choose < i && choose < 8)
		my_repertorie[choose].print_full();
	else
		cout << "Error: no contact at this index " << endl;
}

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	Repertorie		my_repertorie[8];
	int				i = 0;
	std::string		buff;
	int				j = 0;

	while (i >= 0 && buff != "EXIT")
	{

		cout << "Please enter a command (ADD/SEARCH/EXIT):" << endl;
		cin >> buff;
		if (buff == "ADD")
			add_contact(my_repertorie);
		else if (buff == "DISPLAY")
		{
			j = 0;
			while (j < 8)
			{
				my_repertorie[j].print_full();
				j++;
			}
		}
		else if (buff == "SEARCH")
			searsh_contact(my_repertorie);
		else if (buff == "EXIT")
			return 0;
		else
			display_help();
	}
	return 0;
}
