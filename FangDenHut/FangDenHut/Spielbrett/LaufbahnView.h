//
// Created by pjd-x1 on 6/15/21.
//

#ifndef HS_OSNABRUECK_OOAD_FANGDENHUT_LAUFBAHNVIEW_H
#define HS_OSNABRUECK_OOAD_FANGDENHUT_LAUFBAHNVIEW_H
#include "View.h"
#include <memory>
#include <iostream>
#include <list>

class Feld;
class LaufbahnView :public View{
private:
    std::list<std::shared_ptr<Feld>> felder;

public:
    LaufbahnView(std::list<std::shared_ptr<Feld>> _felder): felder(_felder){}
    void show();
};


#endif //HS_OSNABRUECK_OOAD_FANGDENHUT_LAUFBAHNVIEW_H
