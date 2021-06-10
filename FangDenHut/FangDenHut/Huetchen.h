#pragma once


#include <string>


#include "Feld.h"
class Huetchen

{
private: 
	std::string spielerFarbe;
	Feld standort;
	bool status;

public:
	void bewegen(int entfernung){}
	void fangen();
};

