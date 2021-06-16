
#include "SpielerController.h"

void SpielerController::wuefelwerfen() {
    wuerfelErgebnis = wuefel->wuefelwuefeln();
}

void SpielerController::hutwaehlen(std::shared_ptr<Huetchen> huetchen) {
    if(wuerfelErgebnis == 6 && huetchen->isNutzbar() ){
        huetchen->setPosition(spielbrett.get()->getFeldPerIndex(0));
        huetchen->getPosition()->hutNimmtEin(huetchen);
        huetchen->leaveHome();

        return;
    }

    int tmp = huetchen->getPosition()->getFeldId();
    spielbrett.get()->getFeldPerIndex(tmp)->hutLeaves();
    tmp += getWuefelergebnis();
    while (spielbrett.get()->getFeldPerIndex(tmp)->isBesetzt()) {
        tmp--;
    }
    huetchen->setFeld(spielbrett.get()->getFeldPerIndex(tmp));
    huetchen->getPosition()->hutNimmtEin(huetchen);
}

