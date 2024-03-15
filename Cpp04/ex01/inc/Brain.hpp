/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:03:25 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 20:19:24 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain( void );
        Brain( const Brain &brain );
        ~Brain( void );
        Brain &operator=( const Brain &brain);
};
