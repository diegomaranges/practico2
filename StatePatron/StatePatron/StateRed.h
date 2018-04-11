#pragma once
#include "States.h"

class StateRed : public States
{
private:
	Context * cont;
public:
	StateRed(Context * context);
	void Handle();
	~StateRed();
};

