#include "stdafx.h"
#include "Context.h"
#include <iostream>
#include "States.h"
#include "StateYelow.h"

Context::Context()
{
	stts = new StateYelow(this);

}

void Context::setState(States * state)
{
	const auto pointer = stts;
	delete pointer;
	stts = state;
}


void Context::Handle()
{
	stts->Handle();
}

Context::~Context()
{
	delete stts;
}
