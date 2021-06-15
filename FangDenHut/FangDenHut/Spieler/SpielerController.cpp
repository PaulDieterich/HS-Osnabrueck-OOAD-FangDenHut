
#include "SpielerController.h"

SpielerController::SpielerController(int _spielerAnzahl):spielerAnzahl(_spielerAnzahl){
    wuefel = std::make_unique<Wuefel>();


}
void SpielerController::wuefelwerfen() {
    wuerfelErgebnis = wuefel->wuefelwuefeln();
}

void SpielerController::hutwaehlen(std::shared_ptr<Huetchen> huetchen) {
    if(wuerfelErgebnis == 6 && huetchen->isNutzbar() ){
        huetchen->setPosition(spielbrett.get()->getFelderIndex(0));
        huetchen->getPosition()->hutNimmtEin(huetchen);
        huetchen->leaveHome();
    }

}
