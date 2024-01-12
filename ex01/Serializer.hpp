/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:31:20 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/12 17:35:57 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Data.hpp"

class Serializer
{
public :
	static Data* deserialize(uintptr_t raw);
	static uintptr_t serialize(Data* ptr);
private :
	Serializer();
	~Serializer();
};