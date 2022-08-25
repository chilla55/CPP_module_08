/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:05:36 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 12:55:34 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int	main()
{
	std::cout << "----Vector----" << std::endl;
	int	ints[] = {1, 2, 3, 4, 5};
	std::vector<int> values(ints, ints + 5);
	try
	{
		easyfind(values, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "----List----" << std::endl;
	int	ints1[] = {1, 2, 3, 4, 5};
	std::list<int> values1(ints1, ints1 + 5);
	try
	{
		easyfind(values1, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "----Deque----" << std::endl;
	int	ints2[] = {1, 2, 3, 4, 5};
	std::deque<int> values2(ints2, ints2 + 5);
	try
	{
		easyfind(values2, 2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
