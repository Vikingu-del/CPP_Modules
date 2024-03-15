/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:06:45 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 20:06:17 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat( void );
        WrongCat( const WrongCat &wrong_cat );
        ~WrongCat( void );
        WrongCat &operator=( const WrongCat &wrong_cat);
        void makeSound( void ) const;
};