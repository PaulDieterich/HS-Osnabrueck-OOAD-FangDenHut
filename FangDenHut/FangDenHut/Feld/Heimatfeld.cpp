
#include "Heimatfeld.h"

void Heimatfeld::huetchenStart(Huetchen* hut) {
    for(std::list<std::shared_ptr<Huetchen>>::iterator it = huetchen.begin(); it != huetchen.end(); ++it){
        if(hut == it->get()){
            it->reset();
            return;
        }
    }
}