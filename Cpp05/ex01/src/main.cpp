/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:22:51 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/13 20:33:30 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat buro("buro", 156);
    }
    catch(...) {};
    Bureaucrat nextburo("buro", 152);
    std::cout << nextburo;
    increment_byro(nextburo);
    std::cout << nextburo;
    decrement_byro(nextburo);
    std::cout << nextburo;
    increment_byro(nextburo);
    increment_byro(nextburo);
    increment_byro(nextburo);
    increment_byro(nextburo);
    increment_byro(nextburo);
    try {
        Bureaucrat buro("buro", 0);
    }
    catch(...) {};
    Bureaucrat buro("shanell", 1);
    std::cout << buro;
    decrement_byro(buro);
    std::cout << buro;

    try {
        Form form("form", 0, 1);
    }
        catch(...) {};
    Form form("form", 1, 1);
    std::cout << form;
    buro.signForm(form);
    std::cout << form;
    form.beSigned(buro);
    
    

    return 0;
}