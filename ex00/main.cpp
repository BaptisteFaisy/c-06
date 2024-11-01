/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:52:38 by bfaisy            #+#    #+#             */
/*   Updated: 2024/09/11 18:13:22 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"
int main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	const char *str(av[1]);
	ScalarConverter::char_to_char(str);
	ScalarConverter::char_to_int(str);
	ScalarConverter::char_to_float(str);
	ScalarConverter::char_to_double(str);
}