# functions exercises #

## ask1 ##
	#include <iostream>
	using std::cout;
	void f( signed char c) { cout << “Signed char\n”; }
	void f( unsigned char c) {cout << “Unsigned char\n”; }
	int main () {
	char c1 = ‘a’;
	f(c1);
	}
### answer1 ###
a- Return  “Signed char\n” because char for default is signed

## ask2 ##
	Given file A.cpp:
	#include <iostream>
	void f( int ) { std::cout << “f(int)”; }

	And file B.cpp:
	#include <iostream>
	void f( double ) { std::cout << “f(double)”; }
	int main () {
	f(3);
	}
### answer2 ###
b- Return “f(double)” because f(double) its defined and main can view.

## ask3 ##
	Given the file header.h:
	#include <iostream>
	void f( int d);

	And the file A.cpp:
	#include “header.h”
	void f( int d = 10) {std::cout << d << “\t”; }

	And the file B.cpp:
	#include “header.h”
	int main () {
	f();
	f(5);
	}

### answer3 ###
a - There is a compilation error because this function f that view main have one argument and havent value for default so f() it cant enough arguments.

## ask4 ##
	#include <iostream>
	using std::cout;
	void f( float ) { cout << “f(float)”; }
	void f( long double ) {cout << “f(long double)”; }

	int main () {
	f(2.0);
	}
### answer4 ###
c- There is an ambiguity when calling f(2.0). Due to floating point promotions. i bilieved who would return f(long double) but not.

## ask5 ##
	#include <iostream>
	using std::cout;
	using std::endl;

	void f( int& ) { cout << “A”; }
	void f( const int& ) {cout << “B”; }

	int main () {
	int i = 10;
	const int ci = 11;
	f(i);
	f(ci);
	}
### answer5 ###
b- Return "AB" because difference entry const signal int and signal int

## ask6 ##
	int f() { return 1; }
	double f() { return 2.5; }
	int main () {
	int ret = f();
	return ret ;
	}

### answer6 ###
There is a compilation error, because overload cant use with return value.

## ask7 ##
	#include <iostream>
	void f( int ) { std::cout << "int"; }
	void f( double ) { std::cout << "double"; }
	int main () {
	char a = 'a';
	f(a);
	}

### answer7 ###
a- Return "int", due to integer point promotions.

## ask8 ##
Write a sort() function that takes a pointer of ints and its size, and sort them incrementally

### answer8 ###
	#include <stdlib.h> 
	__callback int mymax(const void * a, const void * b) {
		return *(int*)a - *(int*)b;
	}

	int *sort(int *a, int length) {
		qsort(a, length, sizeof(int), mymax);
	}

## ask9 ##
Create a function that takes an argument by value as a const; then try to change that argument in the function body.

### answer9 ###
	void fun(const int a) {
		a = 10;
		cout<<a;
	}
but i cant change constant value. This function will return error.

## ask10 ##
Define a function that takes a double argument and returns an int . Create and initialize a pointer to this function, and call the function through your pointer.

### answer10 ###

	__callback int funct(double);
	
	int callfunct(int(*f)(double)) {
	    int a;
	    a = f(2.0);
	    return a;
	}
	
	int main() {
	    cout << callfunct(funct) << endl;
	    system("pause");
	}
	
	int funct(double) {
	    return 10;
	}

## ask11 ##
Declare a pointer to a function taking an int argument and returning a pointer to a function that takes a char argument and returns a float .

### answer11 ###
	typedef float(*val)(char);

	__callback float funct2(char) {
	    return 1.0;
	}
	
	__callback val funct1(int) {
	    return funct2;
	}

	int main() {
    	cout << funct1(2)('a') << endl;
	}