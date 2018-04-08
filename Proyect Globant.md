# Introduction #
This project is by acquire multiples knowledge about c++.
Each directory consist in diferent types of element belongs c++.

All projects be implementing in **Visual Studio** and by run proyect you most open Visual Studio, go to *open project or solition*, laster in the new windows open search directory where save proyect and do *double click* in file.sln.

## Practico2 ##
In this directory implement some basic operations and the use of **Macros** (Define). This project consists of:

1. **practico2.cpp:** This file contain main function, where print menu, analyze entry values and call to diferent functions.

2. **MenuOpt.h and MenuOpt.cpp:** This files contain a class who is in charge to print diferent menus. Also is charge to recive and return entry value.

3. **AllMenu.h:** This file have al menu that are not default menu. the elements in this header can be called by MenuOpt.h using **callback**.

4. **OperacionesBinarias.h and OperacionesBinarias.cpp:** so as not to overload the main function, can call `SwitchOB(char)` by select binary operation. `and_bin()` does binary and enter two integers. `or_bin()` does binary or enter two integers. `sleft()` binary shift left for two bits on integer. `srigth()` binary shift rigth for two bits on integer.

5. **OperacionesLogicas.h and OperacionesLogicas.cpp:** take two values insert by user for cosole and swap the value. the value entry is take with string by user can any value.

6. **OperacionesMatematicas.h and OperacionesMatematicas.cpp:** so as not to overload the main function, can call `SwitchOM(char)` by select binary operation. `cal_square()` calculate square on one number. `cal_addition()` calculate addition enter two numbers. `circle_area()` take radius entered by user and using variable *PI* defined using macros, calculate circle area. `maximal()` take two integers and return the maximum of both.

7. **OperacionesPreprocesador.h and OperacionesPreprocesador.cpp:** `console_print()` this function print [literal](https://en.wikipedia.org/wiki/Literal_(computer_programming) "Literal(computer_programming)") from comsole. `chain()` take two value and concatenate variable name for both value.

8. **OperacionesString.h and OperacionesString.cpp:** `compare_string()` take two strings and return true if are equal and false otherwise

## Bibliography ##
1. [stackoverflow](https://es.stackoverflow.com/ "stackoverflow").
2. [cplusplus](http://www.cplusplus.com/doc/tutorial/ "cplusplus tutorial").
3. material provided by globant