/*
 * Projekt posiada przykładowe rozwiązania dodatkowych zadań z labolatoriów platformy
 * "STOS" Politechnikii Gdanskiej z roku 2024/2025. Do każdego rozwiązania należy
 * wprowadzić dane ręcznie lub zawrzeć je w pliku "data.qb" według podanego przykładu
 * znajdującego się wewnątrz pliku.
 */
#include "labolatorium_2/labolatorium_2.h"

#define StringifyImplementation(x)  #x
#define Stringify(x)                StringifyImplementation(x)

#define Call(function) CallFunction(function, Stringify(function))

template<typename T>
static void CallFunction(T function, const char* functionName)
{
    std::cout << functionName << std::endl;
    std::cout << "*---------------*\n";
        
    function();
    
    std::cout << std::endl;
    std::cout << "*---------------*\n";
}

int main()
{
    // Labolatorium 2.
    Call(Labolatorium2::HelloWorld);
    Call(Labolatorium2::Testowe);
    Call(Labolatorium2::SortowanieTrzechLiczb);
    Call(Labolatorium2::WzorHerona);

    return 0;
}