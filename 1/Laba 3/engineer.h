#pragma once
#include "personnel.h"

class engineer :public personnel{
public:
	engineer() :personnel() {}
	virtual void Show() override;
};

