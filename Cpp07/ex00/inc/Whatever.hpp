/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:13:23 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/21 13:54:52 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace	my_templates {
	template <typename T>
	void swap(T &a, T &b) {
		T tmp = a;
		a = b;
		b = tmp;
	}

	template <typename T>
	const T min(const T &a, const T &b) {
		return (a < b ? a : b);
	}

	template <typename T>
	const T max(const T &a, const T &b) {
		return (a > b ? a : b);
	}
}

int get_int(void);
int get_float(void);
int get_double(void);
int get_char(void);
int get_string(void);