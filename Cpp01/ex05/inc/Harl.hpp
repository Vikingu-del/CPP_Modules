/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:02:28 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 22:22:06 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
    private:
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );
    public:
        Harl( void );
        ~Harl( void );
        void complain(std::string level);
};

typedef void (Harl::*member_func_pointers) (void);

#endif