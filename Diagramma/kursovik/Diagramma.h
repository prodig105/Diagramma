#pragma once
#include "iostream"
#include "MyForm.h"
#include <sstream>
#include <string>
#include <string.h>
//using namespace std;

class Diag {
protected: int Y[10];
		   int i;

public: 
	virtual void dray(System::Windows::Forms::DataVisualization::Charting::Chart^  chart1) = 0;
};

class Diagramma:public Diag {
public:	
	Diagramma() { for (i = 0; i < 10; i++) Y[i] = 0; }
	 
	Diagramma( int x1, int x2, int x3, int x4, int x5, int x6, int x7) {
	Y[0] = x1;
	Y[1] = x2;
	Y[2] = x3;
	Y[3] = x4;
	Y[4] = x5;
	Y[5] = x6;
	Y[6] = x7;
}

	void dray(System::Windows::Forms::DataVisualization::Charting::Chart^  chart1) {
		if (Y[0] != 0) chart1->Series["Series1"]->Points->AddXY("�1", Y[0]);
		if (Y[1] != 0) chart1->Series["Series1"]->Points->AddXY("�2", Y[1]);
		if (Y[2] != 0) chart1->Series["Series1"]->Points->AddXY("�3", Y[2]);
		if (Y[3] != 0) chart1->Series["Series1"]->Points->AddXY("�4", Y[3]);
		if (Y[4] != 0) chart1->Series["Series1"]->Points->AddXY("�5", Y[4]);
		if (Y[5] != 0) chart1->Series["Series1"]->Points->AddXY("�6", Y[5]);
		if (Y[6] != 0) chart1->Series["Series1"]->Points->AddXY("�7", Y[6]);
	}
};

class Diagramma1 :public Diag {
public:	
	Diagramma1() { for (i = 0; i < 10; i++) Y[i] = 0; }

	Diagramma1( int x1, int x2, int x3, int x4, int x5, int x6, int x7) {
		Y[0] = x1;
		Y[1] = x2;
		Y[2] = x3;
		Y[3] = x4;
		Y[4] = x5;
		Y[5] = x6;
		Y[6] = x7;
	}
	void dray(System::Windows::Forms::DataVisualization::Charting::Chart^  chart1) {
		if (Y[0] != 0) chart1->Series["Series1"]->Points->AddXY("�1", Y[0]);
		if (Y[1] != 0) chart1->Series["Series1"]->Points->AddXY("�2", Y[1]);
		if (Y[2] != 0) chart1->Series["Series1"]->Points->AddXY("�3", Y[2]);
		if (Y[3] != 0) chart1->Series["Series1"]->Points->AddXY("�4", Y[3]);
		if (Y[4] != 0) chart1->Series["Series1"]->Points->AddXY("�5", Y[4]);
		if (Y[5] != 0) chart1->Series["Series1"]->Points->AddXY("�6", Y[5]);
		if (Y[6] != 0) chart1->Series["Series1"]->Points->AddXY("�7", Y[6]);
	}
};