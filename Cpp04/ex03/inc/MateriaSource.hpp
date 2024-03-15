/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:39:10 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/11 12:21:57 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _materias[4];
    public:
        MateriaSource( void );
        MateriaSource( const MateriaSource &materia_source );
        ~MateriaSource( void );
        MateriaSource &operator=( const MateriaSource &materia_source);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};