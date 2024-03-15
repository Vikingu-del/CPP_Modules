/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:36:30 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 19:48:11 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DATA_HPP
# define DATA_HPP
# include <fstream>

class   Data {
    private:
        std::fstream    _infile;
        std::fstream   _outfile;
        std::string     _s1, _s2;
    public:
        Data(std::string filename, std::string s1, std::string s2);
        ~Data();
        void setOutfile(std::string filename);
        void replaceCustom( void );
};

#endif
