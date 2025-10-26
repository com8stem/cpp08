#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
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
};

#endif