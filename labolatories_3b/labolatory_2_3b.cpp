#include "labolatory_2_3b.h"

#include <iostream>

void Labolatory2_3B::Sortowanie2()
{
    int a, b;
    std::cin >> a >> b;

    auto swap = [](int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    };

    if (a > b) 
    {
        swap(a, b);
    }

    std::cout << a << " " << b;
}

void Labolatory2_3B::Podzielnosci2_3()
{
    int a;
    std::cin >> a;

    if (a < 0) 
    { 
        std::cout << "ujemna"; 
    }
    else 
    {
        if ((a % 2 != 0) && (a % 3 == 0)) { std::cout << "nieparzysta, podzielna przez 3"; }
        else if ((a % 2 != 0) && (a % 3 != 0)) { std::cout << "nieparzysta, niepodzielna przez 3"; }
        else if ((a % 2 == 0) && (a % 3) == 0) { std::cout << "parzysta, podzielna przez 3"; }
        else if ((a % 2 == 0) && (a % 3) != 0) { std::cout << "parzysta, niepodzielna przez 3"; }
    }
}

void Labolatory2_3B::Sortowanie3()
{
    constexpr int arraySize = 3;

    int a[arraySize];
    int in = 0;
    while (std::cin >> a[in++]);

    for (int i = 0; i < arraySize - 1; ++i)
    {
        for (int j = 0; j < arraySize - i - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                std::swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << a[i] << " ";
    }
}

void Labolatory2_3B::Podzielnosci2_3_5()
{
    int a;
    std::cin >> a;

    if (a < 0)
    {
        std::cout << "ujemna";
    }
    else
    {
        if ((a % 2 != 0) && (a % 3 != 0) && (a % 5 != 0))      { std::cout << "nieparzysta, niepodzielna przez 3 i 5"; }
        else if ((a % 2 != 0) && (a % 3 != 0) && (a % 5 == 0)) { std::cout << "nieparzysta, niepodzielna przez 3, podzielna przez 5"; }
        else if ((a % 2 != 0) && (a % 3 == 0) && (a % 5 != 0)) { std::cout << "nieparzysta, podzielna przez 3, niepodzielna przez 5"; }
        else if ((a % 2 != 0) && (a % 15 == 0))                { std::cout << "nieparzysta, podzielna przez 15"; }
        else if ((a % 2 == 0) && (a % 3 != 0) && (a % 5 != 0)) { std::cout << "parzysta, niepodzielna przez 3 i 5"; }
        else if ((a % 2 == 0) && (a % 3 != 0) && (a % 5 == 0)) { std::cout << "parzysta, niepodzielna przez 3, podzielna przez 5"; }
        else if ((a % 2 == 0) && (a % 3 == 0) && (a % 5 != 0)) { std::cout << "parzysta, podzielna przez 3, niepodzielna przez 5"; }
        else if ((a % 2 == 0) && (a % 15 == 0))                { std::cout << "parzysta, podzielna przez 15"; }
    }
}

void Labolatory2_3B::Sortowanie4()
{
    constexpr int arraySize = 4;

    int a[arraySize];
    int in = 0;
    while (std::cin >> a[in++]);

    for (int i = 0; i < arraySize - 1; ++i)
    {
        for (int j = 0; j < arraySize - i - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                std::swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << a[i] << " ";
    }
}

void Labolatory2_3B::Sortowanie8()
{
    constexpr int arraySize = 8;

    int a[arraySize];
    int in = 0;
    while (std::cin >> a[in++]);

    for (int i = 0; i < arraySize - 1; ++i)
    {
        for (int j = 0; j < arraySize - i - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                std::swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << a[i] << " ";
    }
}

template<typename T>
void swap(T& lhs, T& rhs)
{
    T temp;
    temp = lhs;
    lhs = rhs;
    rhs = temp;  
}