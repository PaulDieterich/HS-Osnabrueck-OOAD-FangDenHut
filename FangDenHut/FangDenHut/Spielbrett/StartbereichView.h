//
// Created by pjd-x1 on 6/15/21.
//

#ifndef HS_OSNABRUECK_OOAD_FANGDENHUT_STARTBEREICHVIEW_H
#define HS_OSNABRUECK_OOAD_FANGDENHUT_STARTBEREICHVIEW_H


#include <Farbe.h>
#include <View.h>
#include <Feld/Heimatfeld.h>

#include <iostream>
class StartbereichView: public View{
private:
    Farbe farbe;
    std::shared_ptr<Heimatfeld> heimatfeld;
public:
    StartbereichView(Farbe f):farbe(f){};
    void setHeiatfeld(std::shared_ptr<Heimatfeld> _heimatfeld){ heimatfeld = _heimatfeld; };
    void show();

};


#endif //HS_OSNABRUECK_OOAD_FANGDENHUT_STARTBEREICHVIEW_H
