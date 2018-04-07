#include "stdafx.h"
#include "SizeofPrint.h"
#include "MenuOpt.h"

#include <iostream>
#include <limits>
#include <cstddef>

void Print_Sizeof(char option)
{
	int a = 0xFFFFFFFF;
	unsigned int b = 0xFFFFFFFF;
	char c = 65;
	switch (option) {
	case 'a':
		std::cout << "Maximo valor:" << std::endl
			<< "short: " << std::dec << std::numeric_limits<short>::max()
			<< " o " << std::hex << std::showbase << std::numeric_limits<short>::max() << std::endl
			<< "int: " << std::dec << std::numeric_limits<int>::max()
			<< " o " << std::hex << std::numeric_limits<int>::max() << std::endl << std::dec
			<< "streamsize: " << std::dec << std::numeric_limits<std::streamsize>::max()
			<< " o " << std::hex << std::numeric_limits<std::streamsize>::max() << std::endl
			<< "size_t: " << std::dec << std::numeric_limits<std::size_t>::max()
			<< " or " << std::hex << std::numeric_limits<std::size_t>::max() << std::endl
			<< "float: " << std::numeric_limits<float>::max()
			<< " o " << std::hexfloat << std::numeric_limits<float>::max() << std::endl
			<< "double: " << std::defaultfloat << std::numeric_limits<double>::max()
			<< " o " << std::hexfloat << std::numeric_limits<double>::max() << std::endl;
		break;
	case 'b':
		std::cout << "Minimo valor:" << std::endl
			<< "short: " << std::dec << std::numeric_limits<short>::min()
			<< " o " << std::hex << std::showbase << std::numeric_limits<short>::min() << std::endl
			<< "int: " << std::dec << std::numeric_limits<int>::min()
			<< " o " << std::hex << std::numeric_limits<int>::min() << std::endl << std::dec
			<< "streamsize: " << std::dec << std::numeric_limits<std::streamsize>::min()
			<< " o " << std::hex << std::numeric_limits<std::streamsize>::min() << std::endl
			<< "size_t: " << std::dec << std::numeric_limits<std::size_t>::min()
			<< " o " << std::hex << std::numeric_limits<std::size_t>::min() << std::endl
			<< "float: " << std::defaultfloat << std::numeric_limits<float>::min()
			<< " o " << std::hexfloat << std::numeric_limits<float>::min() << std::endl
			<< "double: " << std::defaultfloat << std::numeric_limits<double>::min()
			<< " o " << std::hexfloat << std::numeric_limits<double>::min() << std::endl;
		break;
	case 'c':
		std::cout << "Tamaño:" << std::endl
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
		std::cout << "int a = 0xFFFFFFFF, unsigned int b = 0xFFFFFFFF:" << std::endl
			<< "a = " << a << ", " << "b = " << b << ", " << std::endl
			<< "char c = 65:" << std::endl
			<< "char: " << c << ", " << "dec: " << (int)c << ", " << "hex: " << std::hex << (int)c << ", "
			<< "oct: " << std::oct << (int)c << std::endl;
		break;
	default:
		std::cout << "no es una opcion valida" << std::endl;
		break;
	}
}

