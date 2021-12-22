/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:56:19 by mjung             #+#    #+#             */
/*   Updated: 2021/12/22 23:00:13 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void)
{
	int n1 = 10, n2 = 20;
	double d1 = 1.1, d2 = 2.2;

	std::cout << n1 << ", " << n2 << std::endl;
	Swap(n1, n2);
	std::cout << n1 << ", " << n2 << std::endl;

	std::cout << d1 << ", " << d2 << std::endl;
	Swap(d1, d2);
	std::cout << d1 << ", " << d2 << std::endl;

	return (0);
}
