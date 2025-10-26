#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Span.hpp"

int main()
{
    // basic tests
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try
    {
        sp.addNumber(1);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    // long array tests
    Span long_sp = Span(10000);
    srand(time(NULL));
    for (int i = 0; i < 10000; i++)
    {
        long_sp.addNumber(rand());
    }
    std::cout << long_sp.shortestSpan() << std::endl;
    std::cout << long_sp.longestSpan() << std::endl;
    try
    {
        long_sp.addNumber(1);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    // short array tests
    Span short_sp = Span(1);
    short_sp.addNumber(0);
    try
    {
        std::cout << short_sp.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << short_sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        short_sp.addNumber(0);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}