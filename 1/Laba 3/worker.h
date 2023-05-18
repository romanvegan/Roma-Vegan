#pragma once
#include "personnel.h"

class worker :public personnel{
public:
	worker() : personnel() {}
	virtual void Show() override;
};

