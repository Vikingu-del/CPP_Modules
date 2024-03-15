/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:44:08 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 21:28:36 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal {
    protected:
        std::string type;
    public:
        AAnimal( void );
        AAnimal( const AAnimal &animal );
        AAnimal( std::string type );
        virtual ~AAnimal( void );
        AAnimal &operator=( const AAnimal &animal);
        std::string getType( void ) const;
        void setType( std::string type );
        virtual void makeSound( void ) const = 0;
        virtual void printBrainAddres( void ) const = 0;
};
