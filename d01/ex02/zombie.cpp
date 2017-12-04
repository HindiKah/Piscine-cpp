/*
 * =====================================================================================
 *
 *       Filename:  zombie.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02.12.2017 16:56:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "zombie.hpp"

Zombie::Zombie(std::string str_na, std::string str_ty) : name(str_na), type(str_ty)
{
	this->announce();
}

Zombie::~Zombie(void)
{
	std::cout << this->name << "said \"I DIED...\"" << std::endl;
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> NEED BLOODDDDDDDD......" << std::endl;
}
