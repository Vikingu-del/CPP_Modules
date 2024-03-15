/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:45:25 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 21:29:00 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain *_brain;
    public:
        Cat( void );
        Cat( const Cat &cat );
        ~Cat( void );
        Cat &operator=( const Cat &cat);
        void makeSound( void ) const;
        void printBrainAddres( void ) const;
};
