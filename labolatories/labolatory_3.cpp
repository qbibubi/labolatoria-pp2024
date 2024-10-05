#include "labolatory_3.h"

#include <iostream>
#include <cmath>
#include <vector>

void Labolatory3::RysowanieProstokata()
{
    int a, b;
    std::cin >> a >> b;

    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            std::cout << '#';
        }
        std::cout << std::endl;
    }
}

void Labolatory3::PotegaModuloN()
{
    long long a, n, k;
    while (std::cin >> a >> n >> k)
    {

    }

}

void Labolatory3::SumaCyfrLiczby()
{
    int n;
    std::cin >> n;

    auto AddDigits = [](int number) -> int {
        int result{};
        while (number > 0)
        {
            result += (number % 10);
            number /= 10;
        }
        return result;
    };

    std::vector<std::pair<int, int>> results{};
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        std::cin >> a >> b;

        results.push_back({ a * b, AddDigits(a * b) });
    }

    for (auto const& result : results)
    {
        std::cout << result.first << " " << result.second << std::endl;
    }
}

void Labolatory3::ProblemUlama()
{
    int n;
    std::cin >> n;

    std::vector<int> inputs{};
    for (int i = 0; i < n; ++i)
    {
        int a;
        std::cin >> a;
        inputs.push_back(a);
    }

    for (auto& input : inputs)
    {
        int iterations{};
        while (input != 1)
        {
            if (input % 2 == 0)
            {
                input /= 2;
            }
            else
            {
                input = (input * 3) + 1;
            }
            ++iterations;
        }
        std::cout << iterations << std::endl;
    }
}

void Labolatory3::MinimumMaksimum()
{
    int n{};
    std::cin >> n;

    auto const FindPair = [](std::vector<int> const& numbers) -> std::pair<int, int> {
        int min = numbers[0];
        int max = numbers[0];

        for (auto const& number : numbers)
        {
            if (min > number)
            {
                min = number;
            }
            else if (max < number)
            {
                max = number;
            }
        }

        return { min, max };
    };

    std::vector<std::pair<int, int>> results{};
    for (int i = 0; i < n; ++i)
    {
        int m{};
        std::cin >> m;

        std::vector<int> numbers{};
        for (int j = 0; j < m; ++j)
        {
            int temp{};
            std::cin >>temp;
            numbers.push_back(temp);
        }
    
        auto result = FindPair(numbers);
        results.push_back(result);
    }

    for (auto const& pair : results)
    {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}