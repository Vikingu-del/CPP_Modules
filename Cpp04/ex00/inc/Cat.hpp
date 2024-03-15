/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:45:25 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 18:32:55 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat( void );
        Cat( const Cat &cat );
        ~Cat( void );
        Cat &operator=( const Cat &cat);
        void makeSound( void ) const;
};
