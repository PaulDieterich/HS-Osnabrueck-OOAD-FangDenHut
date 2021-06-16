#pragma once

#include <Spielbrett/Spielbrett.h>
#include <Wuefel.h>

class SpielerController
{
private:

    std::unique_ptr<Wuefel> wuefel;
    int wuerfelErgebnis;
    int spielerAnzahl;
public:
    std::unique_ptr<Spielbrett> spielbrett;
    std::list<std::unique_ptr<Spieler>> spieler;

    SpielerController(int _spielerAnzahl):spielerAnzahl(_spielerAnzahl){
        wuefel = std::make_unique<Wuefel>();
    }

	void hutZiehen();
	void hutwaehlen(std::shared_ptr<Huetchen> huetchen);
	void wuefelwerfen();
    int getWuefelergebnis(){ return wuerfelErgebnis;}


};

