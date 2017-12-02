/*
 * =====================================================================================
 *
 *       Filename:  pony.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02.12.2017 15:26:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
	public:
	Pony(std::string name);
	~Pony(void);

	std::string		name;
	int				number_of_jump;

	void	jump();
};

#endif
