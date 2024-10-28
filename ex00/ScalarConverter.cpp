/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:55:12 by bfaisy            #+#    #+#             */
/*   Updated: 2024/09/11 18:32:03 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::char_to_char(const char *str){ 
    int i = 0;
    int intValue = 0;
    while (str[i])
    {
        if (std::isalpha(str[1]))
        {
            std::cout << "char : Impossible\n";
            return ;
        }
        intValue += str[i];
        i++;
    }
    if (intValue < 256)
        std::cout << "char : "<< static_cast<char>(intValue) << std::endl;
    else
        std::cout << "char : Impossible\n";
}

void ScalarConverter::char_to_int(const char *str) {
	if (!(strcmp(str,"+inff") || strcmp(str,"-inff") || strcmp(str,"+inf"))){
		std::cout << "Valeur entière : " << str << std::endl; return ;}
	try {
        int intValue = static_cast<int>(atoi(str));
        std::cout << "Valeur entière : " << intValue << std::endl;}
    catch (const std::invalid_argument& ia) {std::cout << "Valeur entière : " << "impossible" << std::endl;} 
    catch (const std::out_of_range& oor) {std::cout << "impossible" << std::endl;}
}
void ScalarConverter::char_to_double(const char *str){
    if (!(strcmp(str,"+inff")  || strcmp(str,"-inff") || strcmp(str,"-inf") || strcmp(str,"+inf") || strcmp(str,"nan"))){
		std::cout << "Valeur double : " << str << std::endl; return ;}
    try {
        double doubleValue = (atof(str));
        std::cout << "Valeur double : " << doubleValue << std::endl;
    } catch (const std::invalid_argument& ia) {
        std::cerr << "impossible" << std::endl;
    } catch (const std::out_of_range& oor) {
        std::cerr << "impossible" << std::endl;
    }
}

void ScalarConverter::char_to_float(const char *str)
{
    if (!(strcmp(str,"+inff")  || strcmp(str,"-inff") || strcmp(str,"-inf") || strcmp(str,"+inf") || strcmp(str,"nan"))){
		std::cout << "Valeur float : " << str << "f" << std::endl; return ;}
    try {
        float resultat = static_cast<float>((atof(str)));
        std::cout << "Valeur float : " << resultat << "f" << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "impossible" << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "impossible" << std::endl;
    }
}