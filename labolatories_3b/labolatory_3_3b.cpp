#include "labolatory_3_3b.h"

#include <iostream>

void Labolatory3_3B::WpisywanieLiczb1()
{
    int a, b;
    std::cin >> a >> b;

    for (a; a < b; ++a)
    {
        std::cout << a << " ";
    }
}

void Labolatory3_3B::WpisywanieLiczb2()
{
    int a, b;
    std::cin >> a >> b;

    for (a; a < b; a += 2)
    {
        std::cout << a << " ";
    }
}

void Labolatory3_3B::WpisywanieLiczb3()
{
    int a, b;
    std::cin >> a >> b;

    for (a; a <= b; ++a)
    {
        if (a % 2 == 0)
        {
            std::cout << a << " ";
        }
    }
}

void Labolatory3_3B::NajwiekszyWspolnyDzielnik()
{
    int a, b;
    std::cin >> a >> b;

    static auto const min = [](int a, int b) -> int {
        return (a > b) ? a : b;
    };

    auto result = min(a, b);
    while (result)
    {
        bool divisibleA = (a % result == 0);
        bool divisibleB = (b % result == 0);
        if (divisibleA && divisibleB)
        {
            break;
        }
        
        std::cout << result;
        --result;
    }
}

void Labolatory3_3B::ProstyTestPierwszosci()
{
    static auto const IsPrime = [](int a) -> int {
        for (size_t i = 2; i < a; ++i)
        {
            if (a % i == 0)
            {
                return 0;
            }
        }

        return 1;
    };
 
    int a;
    std::cin >> a;
    std::cout << IsPrime(a);
}

