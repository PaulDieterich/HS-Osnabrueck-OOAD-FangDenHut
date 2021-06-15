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
    bool nutzbar;
    std::shared_ptr<Feld> position;
    std::shared_ptr<Heimatfeld> heim;
	bool status;

public:
    bool isNutzbar(){ return nutzbar;}
    void setNutzbar(bool n){nutzbar = n; }
    Huetchen(Farbe _farbe):farbe(_farbe){}
    Farbe getFarbe(){ return farbe; }
    void leaveHome(){ heim.reset(); }
   void setHome( std::shared_ptr<Heimatfeld> hf){
        heim.reset();
        heim = hf; }

    const std::shared_ptr<Feld> &getPosition() const {
        return position;
    }

    void setPosition(const std::shared_ptr<Feld> &position) {
        Huetchen::position = position;
    }

    void bewegen(Feld* feld);
    void fangen();
};

