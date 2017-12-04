/*
 * =====================================================================================
 *
 *       Filename:  ZombieEvent.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04.12.2017 23:25:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "zombie.hpp"

class		ZombieEvent
{
	public:
		std::string	type;

		ZombieEvent();
		~ZombieEvent();

		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);
};

#endif
