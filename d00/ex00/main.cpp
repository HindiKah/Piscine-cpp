/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  28.11.2017 22:14:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			argv[i][j] = toupper(argv[i][j]);
			j++;
		}
		std::cout << argv[i] << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
