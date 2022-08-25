/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:15:01 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 12:15:53 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class	Span
{
	private:
		unsigned int		_N;
		std::vector<int> 	_arr;
		unsigned int		_count;

	public:
		Span(void);
		Span(unsigned int N);
		~Span(void);
		Span(const Span & obj);

		Span& operator=(const Span & obj);

		void			addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			fillArray();

		class AddNumberException : public std::exception{
			public:
				const char* what() const throw(){
					return("Cant add number");
				}
		};

		class SpanException : public std::exception{
			public:
				const char* what() const throw(){
					return("No span can be found");
				}
		};
};
int				numGenerator(void);
#endif
