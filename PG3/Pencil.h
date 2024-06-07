#pragma once
#include "Stationery.h"
class Pencil:public Stationery {
public:

	Pencil();
	
	~Pencil()override;
	
	void CreateObject();
};
