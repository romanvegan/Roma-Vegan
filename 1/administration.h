#pragma once
#include "personnel.h"

class administration : public personnel {
public:
	administration() :personnel() {}
	virtual void Show() override;
};