# Introduction #
Proyect done by Diego Maranges, March - May 2018.

This project is by acquire multiples knowledge about c++.
Each directory consist in diferent types of element belongs c++.

All projects be implementing in **Visual Studio** and by run proyect you most open Visual Studio, go to *open project or solition*, laster in the new windows open search directory where save proyect and do *double click* in file.sln.

## Practico2 ##
In this directory implement some basic operations and the use of **Macros** (Define). This project consists of:

1. **practico2.cpp:** This file contain main function, where print menu, analyze entry values and call to diferent functions.

2. **MenuOpt.h and MenuOpt.cpp:** This files contain a class who is in charge to print diferent menus. Also is charge to recive and return entry value.

3. **AllMenu.h:** This file has all menu that are not default menu. the elements in this header can be called by MenuOpt.h using **callback**.

4. **OperacionesBinarias.h and OperacionesBinarias.cpp:** so as not to overload the main function, can call `SwitchOB(char)` by select binary operation. `and_bin()` does binary and between two integers. `or_bin()` does binary or between two integers. `sleft()` binary shift left for two bits on integer. `srigth()` binary shift rigth for two bits on integer.

5. **OperacionesLogicas.h and OperacionesLogicas.cpp:** Take two values insert by user for cosole and swap the value. the value entry is take with string by user can any value.

6. **OperacionesMatematicas.h and OperacionesMatematicas.cpp:** So as not to overload the main function, can call `SwitchOM(char)` by select binary operation. `cal_square()` calculate square on one number. `cal_addition()` calculate addition between two numbers. `circle_area()` take radius entered by user and using variable *PI* defined using macros, calculate circle area. `maximal()` take two integers and return the maximum of both.

7. **OperacionesPreprocesador.h and OperacionesPreprocesador.cpp:** `console_print()` this function print [literal](https://en.wikipedia.org/wiki/Literal_(computer_programming) "Literal(computer_programming)") from comsole. `chain()` take two value and concatenate variable name for both value.

8. **OperacionesString.h and OperacionesString.cpp:** `compare_string()` take two strings and return true if are equal and false otherwise

## Practico3 ##
In this directory implement array in *stack memory* and function to print max  and min value of direferents types, or print sizeof that they occupies in memory.

1. **Practico3.cpp:** This file contain main function, where print menu, analyze entry values, call to diferent functions and initialize array in stak.

2. **MenuOpt.h, MenuOpt.cpp and AllMenu.cpp:** This files they fulfill the same function that in *practico2*.

3. **ArrayStack.h and ArrayStack.cpp:** This files contain function `Array_Stack()` that fulfill two functions, update value of array using one statik value by mark current value or print by console the array.

4. **SizeofPrint.h and SizeofPrint.cpp:** This files contain function `Print_sizeof()` that fulfill four functions but all consist of print something by console using library **limits**. First possible maximal value of different types, second possible minimal value of different types, third sizeof value of differents types and fourth three values of diferent shapes(`int a = 0xFFFFFFFF`,`unsigned int b = 0xFFFFFFFF` and `char c = 65`).

### If your architecture It's 32 bits then return: ###
> maximal value:
> 
> `short`: 32767 - `int`: 2147483647 - `streamsize`: 9223372036854775807 -
> `size_t`: 4294967295 - `float`: 3.40282e+38 - `double`: 1.79769e+308.
>
>Minimun value:
>
> `short`: -32768 - `int`: -2147483648 - `streamsize`: -9223372036854775808 -
> `size_t`: 0 - `float`: 1.17549e-38 - `double`: 2.22507e-308.
> 
> Sizeof:
> 
> `bool` = `char` = 1 - `wchar_t` = `char16_t` = `short` = 2 - `char32_t` =
> `int` = `long` = `float` = `size_t` = 4 - `long long` = `double` =
> `long double` = 8

### If your architecture It's 64 bits then return: ###
> maximal value:
> 
> `short`: 32767 - `int`: 2147483647 - `streamsize`: 9223372036854775807 -
> `size_t`: 18446744073709557675 - `float`: 3.40282e+38 - `double`: 1.79769e+308.
>
>Minimun value:
>
> `short`: -32768 - `int`: -2147483648 - `streamsize`: -9223372036854775808 -
> `size_t`: 0 - `float`: 1.17549e-38 - `double`: 2.22507e-308.
> 
> Sizeof:
> 
> `bool` = `char` = 1 - `wchar_t` = `char16_t` = `short` = 2 - `char32_t` =
> `int` = `long` = `float` = 4 - `long long` = `double` = `long double` = 
> `size_t` = 8

### And value of a, b, c in both architecture: ###
> a = -1 or 0xFFFFFFFF
> 
> b = 4294967295 or 0xFFFFFFF
> 
> c = A or 65 or 0x41

*a* and *b* have equal value in hexadecimal but with *a* is signed int the first bit is used by designed sined.

## Practico4 ##
In this directory implement function `swap()` that take two elements of the same type and swap value, and implemente `class LinkedList` its one *double linked list*.

1. **Practico3.cpp:** This file contain main function, where print menu, analyze entry values, call to diferent functions and contain the function `swap()` which use [**templates**](http://www.cplusplus.com/doc/oldtutorial/templates/ "cplusplus templates").

2. **MenuOpt.h and MenuOpt.cpp:** This files they fulfill the same function that in *practico2*.

3. **LinkedList.h and LinkList.cpp:** This files contain a `class LinkedList` that use various public functions, `addToElement()`(take integer and adding if it is not a prime) and `pintList()`(not take elements for parameter and print by console the linked list). Also contain one function private `elemt_valid()`(take one integer and return true if its not a prime number and false otherwise) and  three private variables, `length` (that count the quantity elements in the list), `head`(that contain pointer to first element of list) and `tail`(that contain pointer to last element of list).

4. **Node.h and Node.cpp:** This files contain a `class LinkedList` that use various public functions, `getElem()`, `getNextElem()`, `getPrevElem()`(the three function retorn value of node), `setNextElem()`, `setPrevElem()`(the two function take Node * and update value of node characteristics, but not node value). Also contain the three private value and variables of node, `element`(value of node, in this case integer), `nextt`(pointer to next node), and `prev`(pointer to previus node).

## CommandLineApp ##
In this directory implement function to charge words of file and pass them to integers. Also implement function to search all values insert by user that coincide to integer(words).

The characters value equivalent they are:

Character  |            | Value
---------- | ---------- | --------
a, b, c    | A, B, C    | 2
d, e, f    | D, E, F    | 3
g, h, i    | G, H, I    | 4
j, k, l    | J, K, L,   | 5
m, n, o    | M, N, O    | 6
p, q, r, s | P, Q, R, S | 7
t, u, v    | T, U, V    | 8
w, x, y, z | W, x, Y, Z | 9
otherwise  |            | 1

But for not use one if and else very big, used arithmetic of bits. The variables type `char` they can only take on 26 posible values ( a, ... ,z).

It was created the truth table for each bit. This tables is in the directory **quinemccluskey**, the FirstBit file represent truth table of first bit of the integer on value column in the table, SecondBit file represent second bit, ThirdBit file represent third bit and FourthBit file represent forth bit.

The algorithm McCluskey return minimal possible expression in arithmetic of bits such that truth table is fulfilled.

And finaly by save command and word, this function used [multimap](http://www.cplusplus.com/reference/map/multimap/ "multimap cplusplus"). it multimap is load in the creator of WordsOpt class.

## CommandLineApp2 ##
In this directory implement another method of command line app previus. Switch the arithmetic of bit for array of integers. Representing all alphabet letters by numbers:

Character  |Value       |Character | Value
---------- |:----------:| -------- |:--------:
a, A       | 1          |b, B      | 2
c, C       | 3          |d, D      | 4
e, E       | 5          |f, F      | 6
g, G       | 7          |h, H      | 8
i, I       | 9          |j, J      | 10
k, K       | 11         |l, L      | 12
m, M       | 13         |n, N      | 14
o, O       | 15         |p, P      | 16
q, Q       | 17         |r,R       | 18
s,S        | 19         |t, T      | 20
u, U       | 21         |v, V      | 22
w, W       | 23         |x, X      | 24
y, Y       | 25         |z, Z      | 26

This array is created in the heap when call constructor to WordsOpt class and the values of return in the 26 positions is:

Position in array | Value
 :--------------: | :--------:
1, 2, 3           | 2
4, 5, 6           | 3
7, 8, 9           | 4
10, 11, 12        | 5
13, 14, 15        | 6
16, 17, 18, 19    | 7
20, 21, 22        | 8
23, 24, 25, 26    | 9

## Bibliography ##
1. [stackoverflow](https://es.stackoverflow.com/ "stackoverflow").
2. [cplusplus](http://www.cplusplus.com/doc/tutorial/ "cplusplus tutorial").
3. material provided by [globant enterprise](https://www.facebook.com/Globant/ "Globant").
4. [desing pattern](https://en.wikipedia.org/wiki/Software_design_pattern "Software_design_pattern")