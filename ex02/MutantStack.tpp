/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:58:38 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 16:55:52 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack(void)
{
}

template <typename T> MutantStack<T>::~MutantStack(void)
{
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack<T> &obj)
{
	*this = obj;
}

template <typename T> MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> &obj)
{
	if (this != &obj)
		this->c = obj.c;
	return (*this);
}
