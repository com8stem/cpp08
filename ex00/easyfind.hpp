#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &array, const int value)
{
    return std::find(array.begin(), array.end(), value);
}

#endif