#pragma once


#include <string>
#include <memory>
#include <Feld/Heimatfeld.h>

#include "Farbe.h"

class Feld;
class Heimatfeld;

class Huetchen{
private:
    std::string name;
    Farbe farbe;
    bool nutzbar;
    std::shared_ptr<Feld> position;
    std::shared_ptr<Heimatfeld> heim;
	bool status;

public:
    Huetchen(Farbe _farbe, std::string _name):farbe(_farbe), name(_name){}
    bool isNutzbar(){ return nutzbar;}
    void setNutzbar(bool n){nutzbar = n; }

    Farbe getFarbe(){ return farbe; }
    void leaveHome(){ heim.reset(); }
   void setHome( std::shared_ptr<Heimatfeld> hf){
        heim.reset();
        heim = hf;
    }
    void setFeld(std::shared_ptr<Feld> feld){
        position.reset();
        position = feld;
    }
    const std::shared_ptr<Feld> &getPosition() const {
        return position;
    }

    void setPosition(const std::shared_ptr<Feld> &position) {
        Huetchen::position = position;
    }
};

