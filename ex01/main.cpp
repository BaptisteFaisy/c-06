/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:52:38 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/12 17:58:57 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
	Data input;

	input.firstName = "Baptiste";
	input.lastName = "Faisy";
	input.nickname = "bfaisy";
	input.age = 20;
	input.level = 2.55;

	std::cout << "first name: " << input.firstName << std::endl;
	std::cout << "last name: " << input.lastName << std::endl;
	std::cout << "nickname: " << input.nickname << std::endl;
	std::cout << "age: " << input.age << std::endl;
	std::cout << "level: " << input.level << std::endl;

	std::cout << "------------------------" << std::endl;

	uintptr_t output_uintptr = Serializer::serialize(&input);

	Data* output = Serializer::deserialize(output_uintptr);

	std::cout << "first name: " << output->firstName << std::endl;
	std::cout << "last name: " << output->lastName << std::endl;
	std::cout << "nickname: " << output->nickname << std::endl;
	std::cout << "age: " << output->age << std::endl;
	std::cout << "level: " << output->level << std::endl;
}