#pragma once
class SpielbrettView
{
private:
	void spielbrettChange();
};


class ConcreteSpielbrettView : public SpielbrettView {
	void spielbrettChange(); 
	void show();
};
