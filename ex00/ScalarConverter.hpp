/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:55:17 by bfaisy            #+#    #+#             */
/*   Updated: 2024/09/11 18:20:38 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <cstring>

class ScalarConverter
{
public :
	static void char_to_char(const char *str);
	static void char_to_int(const char *str);
	static void char_to_double(const char *str);
	static void char_to_float(const char *str);
private :
	ScalarConverter();
	~ScalarConverter();
};