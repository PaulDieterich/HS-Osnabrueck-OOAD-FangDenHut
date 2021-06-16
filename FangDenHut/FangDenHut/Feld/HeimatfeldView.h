//
// Created by pjd-x1 on 6/15/21.
//

#ifndef HS_OSNABRUECK_OOAD_FANGDENHUT_HEIMATFELDVIEW_H
#define HS_OSNABRUECK_OOAD_FANGDENHUT_HEIMATFELDVIEW_H


#include <View.h>
#include <Farbe.h>
#include <memory>
#include <iostream>
#include "Heimatfeld.h"

class HeimatfeldView : public  View{
private:
    Farbe farbe;
    std::shared_ptr<Heimatfeld> heimatfeld;
public:

    HeimatfeldView(Farbe _farbe): farbe(_farbe){};

    void setHeimatfeld(std::shared_ptr<Heimatfeld> h){ heimatfeld = h; };
    void show();
};


#endif //HS_OSNABRUECK_OOAD_FANGDENHUT_HEIMATFELDVIEW_H
