#pragma once
#include <string>
#include "Huetchen.h"
class Spieler
{
private:
	Farbe farbe;
	std::string name;
	std::list<std::shared_ptr<Huetchen>> huetchen;
    void addHuetchen(Farbe f);
    bool auswaehlen(Huetchen* hut){
        return hut->isNutzbar();
    };
    std::string createName(Farbe f);
public:
    Spieler(Farbe _farbe);
    std::list<std::shared_ptr<Huetchen>> getHuetchen(){ return huetchen; }


};

