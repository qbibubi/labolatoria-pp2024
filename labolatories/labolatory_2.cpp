#include "labolatory_2.h"

#include <iostream>
#include <cmath>

void Labolatory2::HelloWorld()
{
    std::cout << "Hello World!";
}

void Labolatory2::Testowe()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b;
}

void Labolatory2::SortowanieTrzechLiczb()
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

void Labolatory2::WzorHerona()
{
    float a, b, c;
    std::cin >> a >> b >> c;

    float p = (a + b + c) / 2;
    float area = sqrtf(p * (p - a) * (p - b) * (p - c));

    printf("%lf", area);
}

void Labolatory2::NierownoscTrojkata()
{
    float a, b, c;
    std::cin >> a >> b >> c;

    bool result = false;
    if (
        (a < b + c) &&
        (c < a + b) &&
        (b < c + a)
        ) 
    {
        result = true;
    }

    std::cout << result;
}

void Labolatory2::Maksimum4Liczb()
{
    int array[4]{};
    std::cin >> array[0] >> array[1] >> array[2] >> array[3];

    int result = array[0];
    for (int i = 0; i < 4; ++i)
    {
        if (array[i] > result)
        {
            result = array[i];
        }
    }

    std::cout << result;
}

void Labolatory2::OdlegloscMiedzyPunktami3D()
{
    struct Vector3
    {
        float x, y, z;
    };

    Vector3 firstPoint{};
    Vector3 secondPoint{};

    std::cin >> firstPoint.x >> firstPoint.y >> firstPoint.z;
    std::cin >> secondPoint.x >> secondPoint.y >> secondPoint.z;

    float result = sqrtf(
        pow(secondPoint.x - firstPoint.x, 2.f) +
        pow(secondPoint.y - firstPoint.y, 2.f) +
        pow(secondPoint.z - firstPoint.z, 2.f)
    );

    printf("%lf", result);
}

void Labolatory2::PrzecinanieSieOkregow()
{
    struct Circle
    {
        float x, y;
        float radius;
    };

    Circle firstCircle{};
    Circle secondCircle{};

    std::cin >> firstCircle.x >> firstCircle.y >> firstCircle.radius;
    std::cin >> secondCircle.x >> secondCircle.y >> secondCircle.radius;

    float distance = sqrtf(
        pow(secondCircle.x - firstCircle.x, 2.f) +
        pow(secondCircle.y - firstCircle.y, 2.f)
    );

    char result = 'F';
    if ((distance < firstCircle.radius + secondCircle.radius) &&
        (distance > firstCircle.radius - secondCircle.radius))
    {
        result = 'T';
    }

    std::cout << result;
}

void Labolatory2::PoleTrojkataW3D()
{
    struct Vector3
    {
        float x, y, z;
    };

    auto const CreatePoint3D = []() -> Vector3 {
        Vector3 point{};
        std::cin >> point.x >> point.y >> point.z;
        return point;
        };

    Vector3 A = CreatePoint3D();
    Vector3 B = CreatePoint3D();
    Vector3 C = CreatePoint3D();

    auto const CreateVector3 = [](Vector3 const& a, Vector3 const& b) -> Vector3 {
        return {
            b.x - a.x,
            b.y - a.y,
            b.z - a.z
        };
        };

    Vector3 vectorAB = CreateVector3(A, B);
    Vector3 vectorAC = CreateVector3(A, C);

    auto const DotProduct = [](Vector3 const& a, Vector3 const& b) -> Vector3 {
        return {
            (a.y * b.z) - (a.z * b.y),
            (a.x * b.z) - (b.x * a.z),
            (a.x * b.y) - (b.x * a.y)
        };
        };

    auto const orthogonalVector = DotProduct(vectorAB, vectorAC);

    auto const parallelogramArea = sqrtf(
        pow(orthogonalVector.x, 2.f) +
        pow(orthogonalVector.y, 2.f) +
        pow(orthogonalVector.z, 2.f)
    );

    auto const result = 0.5f * parallelogramArea;

    printf("%lf", result);
}

void Labolatory2::PierwiastkiRownaniaKwadratowego()
{
    float a, b, c;
    std::cin >> a >> b >> c;

    auto const x0 = [&]() -> float {
        return (-b / 2 * a);
        };

    auto const x1 = [&](float const delta) -> float {
        return (-b - sqrtf(delta)) / (2 * a);
        };

    auto const x2 = [&](float const delta) -> float {
        return (-b + sqrtf(delta)) / (2 * a);
        };

    if (a == 0 && b == 0 && c == 0)
    {
        std::cout << 'N';
        return;
    }

    if (a == 0)
    {
        std::cout << 'B';
        return;
    }

    auto const delta = pow(b, 2.f) - (4 * a * c);
    if (delta == 0)
    {
        std::cout << x0();
        return;
    }
    else if (delta > 0)
    {
        printf("%lf %lf", x1(delta), x2(delta));
        return;
    }
    else
    {
        std::cout << 'B';
    }
}