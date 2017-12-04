/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02.12.2017 17:03:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	srand(time(NULL));
	Zombie Willy = Zombie("Willy", "brain eater");
	Zombie *Francky = new Zombie("Francky", "Shit eater");
	ZombieEvent event = ZombieEvent();
	std::string type_tab[] = {"Soul eater", "West coast", "East Cost", "Violent", "Neutral"};

	event.setZombieType(type_tab[rand() % 5]);
	Zombie *Unknowed = event.randomChump();
	delete(Francky);
	delete(Unknowed);
	return 0;
}
