#include "FangDenHut.h"



//mit Hilfe von Jan Weimar
void FangDenHut::spielStart(int spieleranzahl, int felderanzahl) {
    controller = std::make_unique<SpielerController>(spieleranzahl);
    controller->spielbrett = std::make_unique<Spielbrett>(spieleranzahl,felderanzahl);

    std::list<std::unique_ptr<Spieler>>::iterator spit = controller.get()->spieler.begin();

    for(std::list<std::shared_ptr<Heimatfeld>>::iterator it = controller.get()->spielbrett.get()->heimatfelder.begin(); it != controller.get()->spielbrett.get()->heimatfelder.end(); ++it){
        it->get()->koppeln(spit->get()->getHuetchen());
        for(std::list<std::shared_ptr<Huetchen>>::iterator hutit = spit->get()->getHuetchen().begin(); hutit != spit->get()->getHuetchen().end(); ++hutit){
            hutit->get()->setHome(*it);
        }
        ++spit;
    }
    int huetchenNr = 0;
    while (true){
        for(std::list<std::unique_ptr<Spieler>>::iterator it = controller.get()->spieler.begin(); it != controller.get()->spieler.end(); ++it){
            controller.get()->spielbrett.get()->showSpielbrett();

            controller.get()->wuefelwerfen();
            std::cout << controller.get()->getWuefelergebnis() << std::endl;

            do{
                std::cin >> huetchenNr;

            } while (huetchenNr < 1 || huetchenNr > 4);
            --huetchenNr; //TODO: change it

            std::list<std::shared_ptr<Huetchen>>::iterator hutit = it->get()->getHuetchen().begin();
            std::advance(hutit, huetchenNr);
            controller.get()->hutwaehlen(*hutit);
        }
    }
}