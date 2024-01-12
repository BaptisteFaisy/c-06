/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:23:16 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/12 17:31:54 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

typedef struct
{
	std::string	firstName;
	std::string lastName;
	std::string nickname;
	int			age;
	double		level;
} Data;