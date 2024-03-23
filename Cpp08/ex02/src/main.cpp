/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:26:41 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/23 20:03:22 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <algorithm>
#include <list>
#include "defines.h"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << RED << mstack.top() << RESET << std::endl;
    mstack.pop();
    std::cout << RED << mstack.size() << RESET << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << RED << *it << RESET << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    std::cout << std::endl << std::endl;

    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << CYAN << lst.back() << RESET << std::endl;
    lst.pop_back();
    std::cout << CYAN << lst.size() << RESET << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::list<int>::iterator lst_it = lst.begin();
    std::list<int>::iterator lst_ite = lst.end();
    ++lst_it;
    --lst_it;
    while (lst_ite != lst_it)
    {
        std::cout << CYAN << *lst_it << RESET << std::endl;
        ++lst_it;
    }
    std::list<int> copy_lst(lst);
    return 0;
    
    return 0;
}