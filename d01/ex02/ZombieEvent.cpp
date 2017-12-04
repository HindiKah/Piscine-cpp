/*
 * =====================================================================================
 *
 *       Filename:  ZombieEvent.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04.12.2017 23:30:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){};
ZombieEvent::~ZombieEvent(){};

void		ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie *createdZombie = new Zombie(name, this->type);

	return createdZombie;
}

Zombie		*ZombieEvent::randomChump()
{
	std::string name_tab[] = {"Jean-Michel", "Albert", "Kader", "Maurice", "Francois", "Jeannine", "Kevin"};
	Zombie *createdZombie = new Zombie(name_tab[rand() % 7], this->type);
	return createdZombie;
}
