//
// Created by pjd-x1 on 6/15/21.
//

#include "StartbereichView.h"

void StartbereichView::show(){
    std::cout << "Startbereich (" << farbe << "):" << std::endl;
    for (std::list<std::shared_ptr<Huetchen>>::iterator it = heimatfeld.get()->getHuetchen().begin();it != heimatfeld.get()->getHuetchen().end(); ++it){

    }
}