//
// Created by pjd-x1 on 6/15/21.
//

#include <iostream>
#include "LaufbahnView.h"


void LaufbahnView::show() {

    std::cout << "Laufbahn" << std::endl;
    for (std::list<std::shared_ptr<Feld>>::iterator it = felder.begin(); it != felder.end(); ++it) {
        std::cout << it->get()->getFeldId();
        if (it->get()->isBesetzt()) {
            std::cout << it->get()->getHuetchen()->getFarbe();
        }
        std::cout << "\t";
    }
    std::cout << "\n\n";
}