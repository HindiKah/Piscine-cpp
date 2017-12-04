/*
 * =====================================================================================
 *
 *       Filename:  zombie.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02.12.2017 16:49:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class		Zombie
{
	public:
		std::string name;
		std::string type;

		Zombie(std::string name, std::string type);
		~Zombie(void);
		void announce();
};

#endif
