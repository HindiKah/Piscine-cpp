/*
 * =====================================================================================
 *
 *       Filename:  Pony.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02.12.2017 15:32:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "pony.hpp"

Pony::Pony (std::string str) : name(str)
{
	std::cout << this->name << " is born" << std::endl;
}

Pony::~Pony (void)
{
	std::cout << this->name << " die after jumping too much !" << std::endl;
}

void		Pony::jump()
{
	std::cout << this->name << " jump " << this->number_of_jump << " times !" << std::endl;
}
