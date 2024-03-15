/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:44:36 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 21:29:04 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    private:
        Brain *_brain;
    public:
        Dog( void );
        Dog( const Dog &dog );
        ~Dog( void );
        Dog &operator=( const Dog &dog);
        void makeSound( void ) const;
        void printBrainAddres( void ) const;
};

