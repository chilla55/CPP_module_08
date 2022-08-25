/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:15:22 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 12:16:12 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void){
	
	this->_N = 0;
	this->_count = 0;
}

Span::Span(unsigned int N){
	
	this->_N = N;
	this->_count = 0;
}

Span::~Span(void){
	
	this->_arr.clear();
}

Span::Span(const Span & obj) : _arr(obj._arr){
	
	this->_N = obj._N;
	this->_count = obj._count;

}

Span& Span::operator=(const Span & obj){
	
	if (this == &obj)
		return (*this);
	this->_N = obj._N;
	this->_count = obj._count;
	this->_arr = obj._arr;
	return (*this);
}

void	Span::addNumber(int num){
	
	this->_count++;
	if (this->_count > this->_N)
	{
		this->_count--;
		throw Span::AddNumberException();
	}
	else
		this->_arr.push_back(num);
}

unsigned int	Span::shortestSpan(void){
	
	if (this->_count < 2)
		throw Span::SpanException();
	else
	{
		std::vector<int>	tmp(this->_arr);
		std::sort(tmp.begin(), tmp.end());
		unsigned int	span = (unsigned int)(tmp[1] - tmp[0]);
		for (unsigned int i = 0;i < (tmp.size() - 1); i++)
		{
			if (span > (unsigned int)(tmp[i + 1] - tmp[i]))
				span = (unsigned int)(tmp[i + 1] - tmp[i]);
		}
		return (span);
	}
}

unsigned int	Span::longestSpan(void){
	
	if (this->_arr.empty() || this->_count < 2)
		throw Span::SpanException();
	else
	{
		std::vector<int>	tmp(this->_arr);
		std::sort(tmp.begin(), tmp.end());
		unsigned int	span = (unsigned int)(*max_element(this->_arr.begin(), this->_arr.end()) - *min_element(this->_arr.begin(), this->_arr.end()));
		return (span);
	}
}

int	numGenerator(void){
	
	int	num = rand();
	return (num);
}

void	Span::fillArray(void){
	
	this->_arr.resize(this->_N);
	srand(time(NULL));
	std::generate_n(this->_arr.begin(), this->_N, numGenerator);
	this->_count = this->_N;	
}
