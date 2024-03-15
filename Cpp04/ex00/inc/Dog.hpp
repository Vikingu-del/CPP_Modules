/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:44:36 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/09 23:18:04 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog( void );
        Dog( const Dog &dog );
        ~Dog( void );
        Dog &operator=( const Dog &dog);
        void makeSound( void ) const;
};

