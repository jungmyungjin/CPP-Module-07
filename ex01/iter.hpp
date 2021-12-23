/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 22:36:26 by mjung             #+#    #+#             */
/*   Updated: 2021/12/23 22:36:33 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T *addr, std::size_t len, void (*fp)(T))
{
	for(int i=0; i<len; i++)
	{
		fp(addr[i]);
	}
}

template <typename T>
void print(T target)
{
	std::cout << target << std::endl;
}
#endif
