/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02.12.2017 15:24:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "pony.hpp"

int			main(void)
{
	Pony alphonse = Pony("Alphonse");
	Pony *norbert = new Pony("Norbert");

	norbert->number_of_jump = 10;
	alphonse.number_of_jump = 150;
	norbert->jump();
	alphonse.jump();
	std::cout << "Norbert deleted here: ";
	delete(norbert);
	std::cout << "Go to end of main" << std::endl;
	return 0;
}
