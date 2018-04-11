#pragma once
#include "States.h"

class StateGreen : public States
{
private:
	Context * cont;
public:
	StateGreen(Context *);
	void Handle();
	~StateGreen();
};

