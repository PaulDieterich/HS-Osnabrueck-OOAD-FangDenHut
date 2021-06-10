#pragma once

#include "spieler.h"
#include <memory>
class Spielbrett
{
private:
	int spielerAnzahl;
	int felderAnzahl;
	Spieler* aktiverSpieler;  //std::unique_ptr<Spieler>

public:
	int getSpielerAnzahl() { return spielerAnzahl; }
	void setSpielerAnzahl(int anzahl) { spielerAnzahl = anzahl; }
	int getFelderAnzahl() { return felderAnzahl; }
	void setFelderAnzahl(int anzahl) { felderAnzahl = anzahl; }
	Spieler getAktiverSpieler() { return *aktiverSpieler; }
	void setAktiverSpieler(Spieler* p) { aktiverSpieler = p; }



};
