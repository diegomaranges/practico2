#include "stdafx.h"
#include "StateYelow.h"
#include "StateRed.h"
#include <iostream>

using std::cout;

StateYelow::StateYelow(Context * const context) : cont(context)
{
}

void StateYelow::Handle()
{
	cout << "Yellow\n";
	cont->setState(new StateRed(cont));
}


StateYelow::~StateYelow()
{
}
