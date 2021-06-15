#pragma once
#include "Feld.h"
#include <memory>
#include <Farbe.h>
#include <list>

class Huetchen;

class Heimatfeld{
private: 
	int gefangendenCount; 
	int eigHutCount;
    Farbe farbe;
    std::list<std::shared_ptr<Huetchen>> huetchen;
public:
    Heimatfeld(Farbe _farbe): farbe(_farbe){};
    void huetchenStart(Huetchen* hut);
    std::list<std::shared_ptr<Huetchen>> getHuetchen(){ return huetchen; }

};

