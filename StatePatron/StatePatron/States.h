#pragma once
#include "Context.h"


class States
{
public:
	virtual ~States() {}
	virtual void Handle() = 0;
};

