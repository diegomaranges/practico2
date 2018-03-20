#include "Print_Sizeof.h"

void Print_Sizeof()
{
    int a = 0xFFFFFFFF;
    unsigned int b = 0xFFFFFFFF;
    char c = 65;
    std::cout << "max size:" << endl
              << "short: " << std::dec << std::numeric_limits<short>::max()
              << " or " << std::hex << std::showbase << std::numeric_limits<short>::max() << endl
              << "int: " << std::dec << std::numeric_limits<int>::max()
              << " or " << std::hex << std::numeric_limits<int>::max() << endl << std::dec
              << "streamsize: " << std::dec << std::numeric_limits<std::streamsize>::max()
              << " or " << std::hex << std::numeric_limits<std::streamsize>::max() << endl
              << "size_t: " << std::dec << std::numeric_limits<std::size_t>::max()
              << " or " << std::hex << std::numeric_limits<std::size_t>::max() << endl
              << "float: " << std::numeric_limits<float>::max()
              << " or " << std::hexfloat << std::numeric_limits<float>::max() << endl
              << "double: " << std::defaultfloat << std::numeric_limits<double>::max()
              << " or " << std::hexfloat << std::numeric_limits<double>::max() << endl
              << "min size:" << endl
              << "short: " << std::dec << std::numeric_limits<short>::min()
              << " or " << std::hex << std::showbase << std::numeric_limits<short>::min() << endl
              << "int: " << std::dec << std::numeric_limits<int>::min()
              << " or " << std::hex << std::numeric_limits<int>::min() << endl << std::dec
              << "streamsize: " << std::dec << std::numeric_limits<std::streamsize>::min()
              << " or " << std::hex << std::numeric_limits<std::streamsize>::min() << endl
              << "size_t: " << std::dec << std::numeric_limits<std::size_t>::min()
              << " or " << std::hex << std::numeric_limits<std::size_t>::min() << endl
              << "float: "  << std::defaultfloat << std::numeric_limits<float>::min()
              << " or " << std::hexfloat << std::numeric_limits<float>::min() << endl
              << "double: " << std::defaultfloat << std::numeric_limits<double>::min()
              << " or " << std::hexfloat << std::numeric_limits<double>::min() << endl
              << "size of:" << endl
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
              << "long double:\t" << sizeof(long double) << " bytes" << std::endl
              << "int a = 0xFFFFFFFF, unsigned int b = 0xFFFFFFFF, char c = 65:" << endl
              << a << ", " << b << ", " << c << ", "<< endl
              << (int)c << ", " << std::hex << (int)c << ", " << std::oct << (int)c << endl;
}
