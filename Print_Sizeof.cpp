#include "Print_Sizeof.h"

char select_option()
{
    char option_in = '\0';
    cout << "***************************************************" << endl;
    cout << "* a - Imprimir el valor maximo de las variables   *" << endl;
    cout << "* b - Imprimir el valor minimo de las variables   *" << endl;
    cout << "* c - Imprimir la magnitud de tipos de variables  *" << endl;
    cout << "* d - Imprimir a,b,c                              *" << endl;
    cout << "***************************************************" << endl;
    cout << "Opcion: ";
    while(!(cin.get(option_in))) {
       cin.clear();
       cin.ignore(999,'\n');
       cout << "Invalid data type! Please enter 'option' again";
    }
    cin.ignore(999,'\n');
    return option_in;
}

void Print_Sizeof()
{
    char option = '\0';
    int a = 0xFFFFFFFF;
    unsigned int b = 0xFFFFFFFF;
    char c = 65;
    do
    {
        switch (option = select_option()) {
        case 'a':
            std::cout << "Maximo valor:" << endl
                      << "short: " << std::dec << std::numeric_limits<short>::max()
                      << " o " << std::hex << std::showbase << std::numeric_limits<short>::max() << endl
                      << "int: " << std::dec << std::numeric_limits<int>::max()
                      << " o " << std::hex << std::numeric_limits<int>::max() << endl << std::dec
                      << "streamsize: " << std::dec << std::numeric_limits<std::streamsize>::max()
                      << " o " << std::hex << std::numeric_limits<std::streamsize>::max() << endl
                      << "size_t: " << std::dec << std::numeric_limits<std::size_t>::max()
                      << " or " << std::hex << std::numeric_limits<std::size_t>::max() << endl
                      << "float: " << std::numeric_limits<float>::max()
                      << " o " << std::hexfloat << std::numeric_limits<float>::max() << endl
                      << "double: " << std::defaultfloat << std::numeric_limits<double>::max()
                      << " o " << std::hexfloat << std::numeric_limits<double>::max() << endl;
            break;
        case 'b':
           std::cout << "Minimo valor:" << endl
                     << "short: " << std::dec << std::numeric_limits<short>::min()
                     << " o " << std::hex << std::showbase << std::numeric_limits<short>::min() << endl
                     << "int: " << std::dec << std::numeric_limits<int>::min()
                     << " o " << std::hex << std::numeric_limits<int>::min() << endl << std::dec
                     << "streamsize: " << std::dec << std::numeric_limits<std::streamsize>::min()
                     << " o " << std::hex << std::numeric_limits<std::streamsize>::min() << endl
                     << "size_t: " << std::dec << std::numeric_limits<std::size_t>::min()
                     << " o " << std::hex << std::numeric_limits<std::size_t>::min() << endl
                     << "float: "  << std::defaultfloat << std::numeric_limits<float>::min()
                     << " o " << std::hexfloat << std::numeric_limits<float>::min() << endl
                     << "double: " << std::defaultfloat << std::numeric_limits<double>::min()
                     << " o " << std::hexfloat << std::numeric_limits<double>::min() << endl;
            break;
        case 'c':
            std::cout << "Tamaño:" << endl
                     << std::dec << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl
                     << "char:\t\t" << sizeof(char) << " bytes" << std::endl
                     << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl
                     << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl // C++11, may not be supported by your compiler
                     << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl // C++11, may not be supported by your compiler
                     << "short:\t\t" << sizeof(short) << " bytes" << std::endl
                     << "int:\t\t" << sizeof(int) << " bytes" << std::endl
                     << "long:\t\t" << sizeof(long) << " bytes" << std::endl
                     << "long long:\t" << sizeof(long long) << " bytes" << std::endl // C++11, may not be supported by your compiler
                     << "float:\t\t" << sizeof(float) << " bytes" << std::endl
                     << "double:\t\t" << sizeof(double) << " bytes" << std::endl
                     << "long double:\t" << sizeof(long double) << " bytes" << std::endl;
            break;
        case 'd':
           std::cout << "int a = 0xFFFFFFFF, unsigned int b = 0xFFFFFFFF:" << endl
                     << "a = " << a << ", " << "b = " << b << ", " << endl
                     << "char c = 65:" << endl
                     << "char: " << c << ", "<< "dec: "<< (int)c << ", " << "hex: " <<std::hex << (int)c << ", "
                     << "oct: "  << std::oct << (int)c << endl;
            break;
        default:
           std::cout << "no es una opcion valida" << endl;
            break;
        }
    } while(option != 'a' && option != 'b' && option != 'c' && option != 'd');
}
