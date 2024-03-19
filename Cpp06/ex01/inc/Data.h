/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:30:40 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 11:43:06 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

#include <iostream>
#include <string>

typedef struct Data {
    int id;
    std::string name;
    double value;
    // Constructor
    Data(int _id, const std::string &_name, double _value);
    Data();
} Data;

#endif