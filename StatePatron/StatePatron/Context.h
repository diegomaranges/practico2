#pragma once
///#include "States.h"
class States;
class Context
{
private:
	States * stts;
public:
	Context();
	void setState(States *);
	void Handle();
	~Context();
};

