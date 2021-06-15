//
// Created by pjd-x1 on 6/15/21.
//

#include "HeimatfeldView.h"

void HeimatfeldView::show() {
    std::cout << "Heimatfeld(" << farbe << "):" << std::endl;
    int x = 0;
    for(std::list<std::shared_ptr<Huetchen>>::iterator it = heimatfeld.get()->getHuetchen().begin(); it != heimatfeld.get()->getHuetchen().end(); ++it){
        x++;
    }
    std::cout << x << "X\n\n";
}