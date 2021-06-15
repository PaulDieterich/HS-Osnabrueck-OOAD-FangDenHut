#pragma once

#include <memory>
#include "Spieler/SpielerController.h"
#include "Wuefel.h"
class Spiel
{
private: 

public: 
	void spielStart(int spieleranzahl);
	std::unique_ptr<SpielerController> controller;
};

