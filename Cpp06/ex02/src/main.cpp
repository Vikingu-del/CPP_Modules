/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:58:40 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 14:35:22 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

int main (void) {
    Base *p = generate();
    identify(p);
    identify(*p);
    
    Base *p2 = NULL;
    identify(p2);
    identify(*p2);

    Base *p4 = new Unknown;
    identify(p4);
    identify(*p4);

    delete p;
    delete p4;
    return 0;
}