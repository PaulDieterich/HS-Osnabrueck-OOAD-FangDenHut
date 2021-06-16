#pragma once

#include "Spieler/Spieler.h"
#include "FelderbahnView.h"
#include <memory>
#include <Feld/Heimatfeld.h>

class HeimatfeldView;

class Spielbrett{
private:
    int spielerAnzahl;
	int felderAnzahl;
    std::list<std::shared_ptr<Feld>> felder;
    std::unique_ptr<FelderbahnView> l_view;
    std::list<std::unique_ptr<HeimatfeldView>> h_view;
    void felderAnlegen(int felderanzahl);
    void spielerAnlegen(int spieleranzahl);
public:
    Feld* getFelderIndex(int x);
    Spielbrett(int _spielerAnzal, int _feldernZahl);
	int getSpielerAnzahl() { return spielerAnzahl; }
	void setSpielerAnzahl(int anzahl) { spielerAnzahl = anzahl; }
	int getFelderAnzahl() { return felderAnzahl; }
	void setFelderAnzahl(int anzahl) { felderAnzahl = anzahl; }

    Spielbrett(int i);
    void showSpielbrett();
    std::list<std::shared_ptr<Heimatfeld>> heimatfelder;

    std::shared_ptr<Feld> getFeldPerIndex(int x);
};
