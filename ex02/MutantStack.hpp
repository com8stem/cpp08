#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
public:
    typedef typename C::iterator iterator;
    typedef typename C::reverse_iterator reverse_iterator;

    MutantStack();
    MutantStack(const MutantStack &);
    MutantStack &operator=(const MutantStack &);
    ~MutantStack();
    typename C::iterator begin();
    typename C::iterator end();
    typename C::reverse_iterator rbegin();
    typename C::reverse_iterator rend();
};

template <typename T, typename C>
MutantStack<T, C>::MutantStack() : std::stack<T, C>()
{
}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(const MutantStack &other) : std::stack<T, C>(other)
{
}

template <typename T, typename C>
MutantStack<T, C> &MutantStack<T, C>::operator=(const MutantStack<T, C> &other)
{
    std::stack<T, C>::operator=(other);
    return *this;
}

template <typename T, typename C>
MutantStack<T, C>::~MutantStack()
{
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin()
{
    return std::stack<T, C>::c.begin();
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::end()
{
    return std::stack<T, C>::c.end();
}

template <typename T, typename C>
typename MutantStack<T, C>::reverse_iterator MutantStack<T, C>::rbegin()
{
    return std::stack<T, C>::c.rbegin();
}

template <typename T, typename C>
typename MutantStack<T, C>::reverse_iterator MutantStack<T, C>::rend()
{
    return std::stack<T, C>::c.rend();
}

#endif