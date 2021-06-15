#pragma once


#include <string>
#include <memory>
#include <Feld/Heimatfeld.h>

#include "Farbe.h"

class Feld;
class Heimatfeld;

class Huetchen{
private:
    Farbe farbe;
    std::shared_ptr<Feld> position;
    std::shared_ptr<Heimatfeld> heim;
	bool status;

public:

    Huetchen(Farbe _farbe):farbe(_farbe){}
    Farbe getFarbe(){ return farbe; }
    void leaveHome(){ heim.reset(); }
//    void setHome(Heimatfeld *hf){ heim = std::make_shared<Heimatfeld>(hf); }

    void bewegen(Feld* feld);
    void fangen();
};

