/*
 * Projekt posiada przykładowe rozwiązania dodatkowych zadań z labolatoriów platformy
 * "STOS" Politechnikii Gdanskiej z roku 2024/2025. Do każdego rozwiązania należy
 * wprowadzić dane ręcznie.
 */
#include "labolatories/labolatory_2.h"
#include "labolatories/labolatory_3.h"

#include <iostream>

#define StringifyImplementation(x)  #x
#define Stringify(x)                StringifyImplementation(x)

#define Call(function) CallFunction(function, Stringify(function))

template<typename T>
static void CallFunction(T function, const char* functionName)
{
    std::cout << functionName << std::endl;
    std::cout << "*---------------*\n";
        
    function();
    
    std::cout << std::endl << std::endl << std::endl;
}

int main()
{
    /*
     * Labolatory 2
     */
    // Call(Labolatory2::HelloWorld);
    // Call(Labolatory2::Testowe);
    // Call(Labolatory2::SortowanieTrzechLiczb);
    // Call(Labolatory2::WzorHerona);
    // Call(Labolatory2::NierownoscTrojkata);
    // Call(Labolatory2::Maksimum4Liczb);
    // Call(Labolatory2::OdlegloscMiedzyPunktami3D);
    // Call(Labolatory2::PrzecinanieSieOkregow);
    // Call(Labolatory2::PoleTrojkataW3D);
    // Call(Labolatory2::PierwiastkiRownaniaKwadratowego);

    /*
     * Labolatory 3
     */
    Call(Labolatory3::RysowanieProstokata);
    // Call(Labolatory3::PotegaModuloN);
    // Call(Labolatory3::SumaCyfrLiczby);
    // Call(Labolatory3::ProblemUlama);
    // Call(Labolatory3::MinimumMaksimum);
    // Call(Labolatory3::TestowanieTrojkatow);
    // Call(Labolatory3::FunkcjaSigma);
    // Call(Labolatory3::OperacjeNaLiczbachWymiernych);
    // Call(Labolatory3::OperacjeNaLiczbachZespolonych);
    // Call(Labolatory3::DziesietneDoRzymskie);
    // Call(Labolatory3::Kalkulator);
    // Call(Labolatory3::Podzielnosc);

    return 0;
}