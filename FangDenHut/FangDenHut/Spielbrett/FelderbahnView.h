#pragma once

#include "View.h"
#include <list>
#include <memory>
#include "Feld/Feld.h"
#include "Feld/Heimatfeld.h"

class FelderbahnView : public View {
public:
    FelderbahnView(std::list<std::shared_ptr<Feld>> felder);
    void show();
    //void modelChanged();
private:
    std::list<std::shared_ptr<Feld>> felder;
    //std::list<std::shared_ptr<Heimatfeld>> h_felder;
};