#include "Spieler.h"

Spieler::Spieler(Farbe _farbe) : farbe(_farbe){
    addHuetchen(_farbe);
}

void Spieler::addHuetchen(Farbe f) {
    for (int i = 0; i < 4 ; ++i) {
        huetchen.push_back(std::make_shared<Huetchen>(Huetchen(f)));
    }
}