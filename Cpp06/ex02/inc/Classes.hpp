/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:14:19 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 14:35:03 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base { public: virtual ~Base() {} };

class A : public Base {};

class B : public Base {};

class C : public Base {};

class Unknown : public Base {};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

