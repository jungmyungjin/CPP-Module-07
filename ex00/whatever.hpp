/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:56:30 by mjung             #+#    #+#             */
/*   Updated: 2021/12/22 23:17:15 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
T min(T &a, T &b)
{
	if (a < b)
		return a;
	else 
		return b;
};
template <typename T>

T max(T &a, T &b)
{
	if (a > b)
		return a;
	else 
		return b;
};

#endif
