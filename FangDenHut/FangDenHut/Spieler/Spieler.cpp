#include "Spieler.h"

Spieler::Spieler(Farbe _farbe) : farbe(_farbe){
    addHuetchen(_farbe);
}

std::string Spieler::createName(Farbe f) {
    std::string name;
switch(f){
    case 0: name= "R"; break;
    case 1: name= "G"; break;
    case 2: name= "B"; break;
    case 3: name= "GR";break;
    case 4: name= "S"; break;
    case 5: name= "W"; break;
    break;
}
return name;
}
void Spieler::addHuetchen(Farbe f) {
    for (int i = 0; i < 4 ; ++i) {
        std::string name = createName(f);
        name = name + std::to_string(f);
        huetchen.push_back(std::make_shared<Huetchen>(Huetchen(f,name)));
    }
}