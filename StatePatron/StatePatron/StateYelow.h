#pragma once
#include "States.h"

class StateYelow : public States
{
private:
	Context * cont;
public:
	StateYelow(Context *context);
	void Handle();
	~StateYelow();
};

