#pragma once

#include "Spieler/Spieler.h"
#include <memory>
#include <Feld/Heimatfeld.h>

class Spielbrett
{
private:
    int spielerAnzahl;
	int felderAnzahl;
	std::unique_ptr<Spieler> aktiverSpieler;  //std::unique_ptr<Spieler>
    std::list<std::shared_ptr<Feld>> felder;
    std::list<std::shared_ptr<Heimatfeld>> heimatfelder;
    void felderAnlegen(int felderanzahl);
    void spielerAnlegen(int spieleranzahl);

public:
    Spielbrett(int _spielerAnzal, int _feldernZahl);

	int getSpielerAnzahl() { return spielerAnzahl; }
	void setSpielerAnzahl(int anzahl) { spielerAnzahl = anzahl; }
	int getFelderAnzahl() { return felderAnzahl; }
	void setFelderAnzahl(int anzahl) { felderAnzahl = anzahl; }
	Spieler getAktiverSpieler() { return *aktiverSpieler; }
	//void setAktiverSpieler(Spieler* p) { aktiverSpieler = p; }



};
