// StatePatron.cpp: define el punto de entrada de la aplicación de consola.
//http://www.cplusplus.com/reference/mutex/
//https://stackoverflow.com/questions/6077143/disable-copy-constructor
//https://es.wikipedia.org/wiki/Singleton
//http://www.bogotobogo.com/DesignPatterns/singleton.php
//http://en.cppreference.com/w/cpp/thread/scoped_lock

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

