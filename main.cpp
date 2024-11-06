/*
 * Projekt posiada przykładowe rozwiązania dodatkowych zadań z labolatoriów platformy
 * "STOS" Politechnikii Gdanskiej z roku 2024/2025. Do każdego rozwiązania należy
 * wprowadzić dane ręcznie.
 */
#include "labolatories/labolatory_2.h"
#include "labolatories/labolatory_3.h"

#include "labolatories_3b/labolatory_2_3b.h"
#include "labolatories_3b/labolatory_3_3b.h"

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

/*
* Vector tylko dla inta, 
*/

class DynamicArrayInt
{
private:
    int* data;
    size_t size;

public:
    DynamicArrayInt(size_t newSize) : size(0)
    {
        data = new int[newSize];
    }

    ~DynamicArrayInt()
    {
        delete[] data;
    }
};

template<typename T>
class Vector
{
private:
    T* data;
    size_t size;

public:
    Vector(size_t newSize) : size(newSize)
    {
        data = new T[size];
    }

    ~Vector()
    {
        delete[] data;
    }
};

// <typename T>, T jest dowolnym typem, wiec mozemy np. zrobic 

Vector<int> vec;
Vector<std::string> vecString;


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
    // Call(Labolatory3::RysowanieProstokata);
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


    /* 
     * Labolatory 2_3B
    */
    // Call(Labolatory2_3B::Sortowanie2);
    // Call(Labolatory2_3B::Podzielnosci2_3);
    // Call(Labolatory2_3B::Sortowanie3);
    // Call(Labolatory2_3B::Podzielnosci2_3_5);
    // Call(Labolatory2_3B::Sortowanie4);
    
    /*
     * Labolatory 3_3B
     */
    // Call(Labolatory3_3B::WpisywanieLiczb1);
    // Call(Labolatory3_3B::WpisywanieLiczb2);
    // Call(Labolatory3_3B::WpisywanieLiczb3);
    CallFunction(Labolatory3_3B::NajwiekszyWspolnyDzielnik, "Labolatory3_3B::NajwiekszyWspolnyDzielnik");
    // Call(Labolatory3_3B::ProstyTestPierwszosci);

    return 0;
}
