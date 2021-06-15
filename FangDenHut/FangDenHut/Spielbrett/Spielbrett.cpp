#include "Spielbrett.h"

Spielbrett::Spielbrett(int _spielerAnzal, int _felderAnzahl):spielerAnzahl(_spielerAnzal), felderAnzahl(_felderAnzahl) {
    felderAnlegen(_felderAnzahl);
    spielerAnlegen(_spielerAnzal);
}

void Spielbrett::felderAnlegen(int felderanzahl){
    for (int i = 0; i < felderanzahl; ++i) {
        felder.push_back(std::make_shared<Feld>(i));
    }
}
void Spielbrett::spielerAnlegen(int spieleranzahl) {
    for(int i = 0; i < spieleranzahl; i++){
        heimatfelder.push_back(std::make_shared<Heimatfeld>(Heimatfeld(Farbe(i))));
    }

}