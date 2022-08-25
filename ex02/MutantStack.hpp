/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:56:52 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 12:59:08 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T> class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack(const MutantStack<T> &obj);
		MutantStack& operator=(const MutantStack<T> &obj);

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator 		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator 	const_reverse_iterator;

		iterator				begin(void) { return this->c.begin(); }
		iterator				end(void) { return this->c.end(); }

		const_iterator			begin(void) const { return this->c.begin(); }
		const_iterator			end(void) const { return this->c.end(); }

		reverse_iterator		rbegin(void) { return this->c.rbegin(); }
		reverse_iterator		rend(void) { return this->c.rend(); }

		const_reverse_iterator	rbegin(void) const { return this->c.rbegin(); }
		const_reverse_iterator	rend(void) const { return this->c.rend(); }
};

#include "MutantStack.tpp"

#endif
