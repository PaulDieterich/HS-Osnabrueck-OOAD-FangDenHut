#pragma once
 class SpielerView {
 public:
	 void spielerChange();
};

 class ConcreteSpielerView : public SpielerView {
 public:
	 void spielerView();
	 void show();
 };