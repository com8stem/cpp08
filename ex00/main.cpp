#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    // ===== Test 1: std::vector<int> =====
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    std::vector<int>::iterator it1 = easyfind(vec, 30);
    if (it1 != vec.end())
        std::cout << "Found in vector: " << *it1 << std::endl;
    else
        std::cout << "Not found in vector" << std::endl;

    std::vector<int>::iterator it2 = easyfind(vec, 99);
    if (it2 != vec.end())
        std::cout << "Found in vector: " << *it2 << std::endl;
    else
        std::cout << "Not found in vector" << std::endl;

    // ===== Test 2: std::list<int> =====
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(15);
    lst.push_back(25);

    std::list<int>::iterator it3 = easyfind(lst, 15);
    if (it3 != lst.end())
        std::cout << "Found in list: " << *it3 << std::endl;
    else
        std::cout << "Not found in list" << std::endl;

    std::list<int>::iterator it4 = easyfind(lst, 99);
    if (it4 != lst.end())
        std::cout << "Found in list: " << *it4 << std::endl;
    else
        std::cout << "Not found in list" << std::endl;

    return 0;
}