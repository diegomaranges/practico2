#include "stdafx.h"
#include "StateRed.h"
#include "StateGreen.h"
#include <iostream>

using std::cout;

StateRed::StateRed(Context * context) : cont(context)
{
}

void StateRed::Handle()
{
	cout << "Red \n";
	cont->setState(new StateGreen(cont));
}

StateRed::~StateRed()
{
}
