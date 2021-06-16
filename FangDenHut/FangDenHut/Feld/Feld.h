#pragma once

#include <memory>
#include <Huetchen.h>

class Huetchen;

class Feld
{
private: 
	int feldID; 
    bool besetzt;

    std::shared_ptr<Huetchen> huetchen;
public:
    Feld(int id):feldID(id) {}

    int getFeldId() const {return feldID;}
    void setFeldId(int feldId) {feldID = feldId;}
    bool isBesetzt() const {return besetzt;}
    void setBesetzt(bool besetzt) {Feld::besetzt = besetzt;}
    const std::shared_ptr <Huetchen> &getHuetchen() const {return huetchen;}
    void setHuetchen(const std::shared_ptr <Huetchen> &huetchen) {Feld::huetchen = huetchen;}

    void hutLeaves(){ huetchen.reset();}
    void hutNimmtEin(std::shared_ptr<Huetchen> h);
};

