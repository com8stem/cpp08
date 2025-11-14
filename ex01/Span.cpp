#include "Span.hpp"

Span::Span() : N(0)
{
}

Span::Span(unsigned int init_n) : N(init_n)
{
}

Span::Span(const Span &other) : N(other.N), array(other.array)
{
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->N = other.N;
        this->array = other.array;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(const int element)
{
    if (this->array.size() >= this->N)
        throw std::runtime_error("Span capacity exceeded");
    array.push_back(element);
}

int Span::shortestSpan() const
{
    if (this->array.size() <= 1)
        throw std::runtime_error("No span can be found!");

    std::vector<int> tmp;

    tmp = this->array;
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::iterator first = tmp.begin();
    std::vector<int>::iterator second = tmp.begin() + 1;
    int difference = *second - *first;
    while (second != tmp.end())
    {
        if (difference > *second - *first)
            difference = *second - *first;
        first++;
        second++;
    }
    return difference;
}

int Span::longestSpan() const
{
    if (this->array.size() <= 1)
        throw std::runtime_error("No span can be found!");
    int min = *std::min_element(array.begin(), array.end());
    int max = *std::max_element(array.begin(), array.end());
    return max - min;
}
