/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:55:17 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/11 21:37:10 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter
{
public :
	static void char_to_char(std::string str);
	static void char_to_int(std::string str);
	static void char_to_double(std::string str);
	static void char_to_float(std::string str);
private :
	ScalarConverter();
	~ScalarConverter();
};