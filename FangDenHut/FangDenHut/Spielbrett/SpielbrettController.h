#pragma once

#include <memory>

class SpielbrettController
{
private: 
	void start();
	void createFelder();

	void hutwaehlen(std::shared_ptr<Huetchen> hut); //TODO: implement
};

