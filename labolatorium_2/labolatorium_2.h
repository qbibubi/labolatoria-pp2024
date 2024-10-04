#pragma once

#include <iostream>

namespace Labolatorium2
{
    // 1. Hello World
    inline void HelloWorld()
    {
        std::cout << "Hello World!";
    }

    // 2. Testowe
    inline void Testowe()
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << a + b;
    }

    // 3. Sortowanie trzech liczb
    inline void SortowanieTrzechLiczb()
    {
        auto swap = [](int& a, int& b) {
            int temp;
            temp = a;
            a = b;
            b = temp;
        };

        int array[3]{};
        std::cin >> array[0] >> array[1] >> array[2];

        bool swapped;
        for (int i = 0; i < 3 - 1; ++i)
        {
            swapped = false;
            for (int j = 0; j < 3 - i - 1; ++j)
            {
                if (array[j] < array[j + 1])
                {
                    swap(array[j], array[j + 1]);
                    swapped = true;
                }
            }

            if (!swapped)
            {
                break;
            }
        }

        for (int i = 0; i < 3; ++i)
        {
            std::cout << array[i] << " ";
        }
    }

    inline void WzorHerona()
    {

    }
}
