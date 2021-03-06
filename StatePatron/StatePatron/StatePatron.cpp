// StatePatron.cpp: define el punto de entrada de la aplicación de consola.
// http://www.cplusplus.com/articles/zAqpX9L8/

#include "stdafx.h"

#include <time.h>
#include <windows.h>
#include <conio.h>
#include "Context.h"

int main()
{
	Context cont;

	int count = 0, i = 0;
	int seconds;

	while (1)
	{
		if (i % 3 == 0)
			printf("---------\nSession %d\n---------\n", ((i + 1) / 3) + 1);

		if (count == 0) seconds = 6, count = 1;
		else if (count == 1) seconds = 4, count = 2;
		else if (count == 2) seconds = 5, count = 0;

		Sleep((clock_t)seconds * CLOCKS_PER_SEC);
		cont.Handle();
		i++;
	}
	return 0;
}

