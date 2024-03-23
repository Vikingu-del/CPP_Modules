/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:15:15 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/23 13:32:25 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main(void) {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    std::deque<int> d;
    d.push_back(3);
    d.push_back(124);
    d.push_back(5);
    d.push_back(7);
    d.push_back(8);

    std::list<int> l;
    l.push_back(3);
    l.push_back(-2);
    l.push_back(-6);
    l.push_back(9);
    l.push_back(8);

    try {
        easyfind(v, 3);
    } catch (std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        easyfind(v, 56);
    } catch (std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        easyfind(d, 3);
    } catch (std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        easyfind(d, 56);
    }  catch (std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        easyfind(l, 3);
    }  catch (std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        easyfind(l, 56);
    }  catch (std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}