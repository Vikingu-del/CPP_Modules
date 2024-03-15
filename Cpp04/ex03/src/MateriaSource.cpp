/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:15:25 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/11 12:59:22 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • learnMateria(AMateria*)
// Copies the Materia passed as a parameter and store it in memory so it can be cloned
// later. Like the Character, the MateriaSource can know at most 4 Materias. They
// are not necessarily unique.
// • createMateria(std::string const &)
// Returns a new Materia. The latter is a copy of the Materia previously learned by
// the MateriaSource whose type equals the one passed as parameter. Returns 0 if
// the type is unknown.
// In a nutshell, your MateriaSource must be able to learn "templates" of Materias to
// create them when needed. Then, you will be able to generate a new Materia using just
// a string that identifies its type.

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
    for (int i = 0; i < 4; i++)
        this->_materias[i] = 0;
    std::cout << BOLD << "MateriaSource default constructor called!" << RESET << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &materia_source ) {
    for (int i = 0; i < 4; i++) {
		if (materia_source._materias[i])
			this->_materias[i] = (materia_source._materias[i])->clone();
        else
            this->_materias[i] = 0;
    }
    std::cout << BOLD << "MateriaSource copy constructor called!" << RESET << std::endl;
}

MateriaSource::~MateriaSource( void ) {
    for (int i = 0; i < 4; i++) {
        if (this->_materias[i]) {
            delete this->_materias[i];
            this->_materias[i] = 0;
        }
    }
    std::cout << BOLD << "MateriaSource destructor called!" << RESET << std::endl;
}

MateriaSource &MateriaSource::operator=( const MateriaSource &materia_source) {
    if (this != &materia_source) {
        for (int i = 0; i < 4; i++) {
            if (this->_materias[i]) {
                delete this->_materias[i];
                this->_materias[i] = 0;
            }
            if (materia_source._materias[i])
                this->_materias[i] = materia_source._materias[i]->clone();
            else
                this->_materias[i] = 0;
        }
    }
    std::cout << BOLD << "MateriaSource assignment operator called!" << RESET << std::endl;
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m) {
        std::cout << BOLD << "You can't learn a null materia!" << RESET << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (!this->_materias[i]) {
            this->_materias[i] = m;
            std::cout << BOLD << "Materia " << m->getType() << " learned!" << RESET << std::endl;
            return;
        }
    }
    std::cout << BOLD << "You can't learn more than 4 materias!" << RESET << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (this->_materias[i] && this->_materias[i]->getType() == type) {
            std::cout << BOLD << "Materia " << type << " created!" << RESET << std::endl;
            return this->_materias[i]->clone();
        }
    }
    std::cout << BOLD << "Materia " << type << " not found!" << RESET << std::endl;
    return 0;
}
