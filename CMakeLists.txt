cmake_minimum_required(VERSION 3.19)
project(HS_Osnabrueck_OOAD_FangDenHut)

set(CMAKE_CXX_STANDARD 14)

include_directories(FangDenHut/FangDenHut)

add_executable(HS_Osnabrueck_OOAD_FangDenHut
        FangDenHut/FangDenHut/Feld/Feld.cpp
        FangDenHut/FangDenHut/Feld/Feld.h
        FangDenHut/FangDenHut/Feld/Heimatfeld.cpp
        FangDenHut/FangDenHut/Feld/Heimatfeld.h
        FangDenHut/FangDenHut/Huetchen.cpp
        FangDenHut/FangDenHut/Huetchen.h
        FangDenHut/FangDenHut/main.cpp
        FangDenHut/FangDenHut/Feld/Ruhefeld.cpp
        FangDenHut/FangDenHut/Feld/Ruhefeld.h
        FangDenHut/FangDenHut/Spiel.cpp
        FangDenHut/FangDenHut/Spiel.h
        FangDenHut/FangDenHut/Spielbrett/Spielbrett.cpp
        FangDenHut/FangDenHut/Spielbrett/Spielbrett.h
        FangDenHut/FangDenHut/Spielbrett/SpielbrettController.cpp
        FangDenHut/FangDenHut/Spielbrett/SpielbrettController.h
        FangDenHut/FangDenHut/Spielbrett/SpielbrettView.cpp
        FangDenHut/FangDenHut/Spielbrett/SpielbrettView.h
        FangDenHut/FangDenHut/Spieler/Spieler.cpp
        FangDenHut/FangDenHut/Spieler/Spieler.h
        FangDenHut/FangDenHut/Spieler/SpielerController.cpp
        FangDenHut/FangDenHut/Spieler/SpielerController.h
        FangDenHut/FangDenHut/Spieler/SpielerView.h
        FangDenHut/FangDenHut/Wuefel.cpp
        FangDenHut/FangDenHut/Wuefel.h FangDenHut/FangDenHut/Farbe.h FangDenHut/FangDenHut/View.cpp FangDenHut/FangDenHut/View.h FangDenHut/FangDenHut/Spielbrett/StartbereichView.cpp FangDenHut/FangDenHut/Spielbrett/StartbereichView.h FangDenHut/FangDenHut/Spielbrett/LaufbahnView.cpp FangDenHut/FangDenHut/Spielbrett/LaufbahnView.h)
