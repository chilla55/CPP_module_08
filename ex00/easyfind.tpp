/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:58:19 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 12:55:33 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T >
void	easyfind(T cont, int integer){
	
	typename T::iterator it = std::find(cont.begin(), cont.end(), integer);
	if (it != cont.end())
		std::cout << integer << " located at: [" << (std::distance(cont.begin(), it)) << "] index" << std::endl;
	else
		throw (std::exception());
}
