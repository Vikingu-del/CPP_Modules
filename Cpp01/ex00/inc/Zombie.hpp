/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 01:22:19 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/05 13:37:51 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
    private:
        std::string _name;
    
    public:
        ~Zombie();
        void setName( std::string name );
        const std::string& getName( void ) const;
        void announce( void );
};

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif