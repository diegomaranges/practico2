#include "stdafx.h"
#include <iostream>
#include "StateYelow.h"
#include "StateGreen.h"


using std::cout;


StateGreen::StateGreen(Context *context) : cont(context)
{
}

void StateGreen::Handle()
{
	cout << "Green\n";
	States * nextState = new StateYelow(cont);
	cont->setState(nextState);
}

StateGreen::~StateGreen()
{
}
