#pragma once

#include <memory>
#include "Spieler/SpielerController.h"
#include "Wuefel.h"
#include <iostream>
class FangDenHut
{
private: 

public:
    void spielStart(int spieleranzahl,int felderzahlen);
	std::unique_ptr<SpielerController> controller;
};

