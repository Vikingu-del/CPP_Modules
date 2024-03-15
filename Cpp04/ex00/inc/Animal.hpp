/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:44:08 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 20:02:25 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal( void );
        Animal( const Animal &animal );
        Animal( std::string type );
        virtual ~Animal( void );
        Animal &operator=( const Animal &animal);
        std::string getType( void ) const;
        void setType( std::string type );
        virtual void makeSound( void ) const;
};
