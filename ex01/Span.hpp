#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <stdexcept>
#include <algorithm>

class Span
{
private:
    unsigned int N;
    std::vector<int> array;
    Span();

public:
    Span(unsigned int init_n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    void addNumber(const int element);
    int shortestSpan() const;
    int longestSpan() const;
    template <typename T>
    void addNumbers(T begin, T end)
    {
        if (this->array.size() + std::distance(begin, end) > this->N)
            throw std::runtime_error("Span capacity exceeded");
        this->array.insert(this->array.end(), begin, end);
    };
};

#endif